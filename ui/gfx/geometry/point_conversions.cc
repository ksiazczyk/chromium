// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Point conversion helpers
// summary: Implements floored, ceiled, and rounded conversions from the floating-point PointF to the integer Point type using clamped math.
// ---

#include "ui/gfx/geometry/point_conversions.h"

#include "base/numerics/safe_conversions.h"

namespace gfx {

Point ToFlooredPoint(const PointF& point) {
  return Point(base::ClampFloor(point.x()), base::ClampFloor(point.y()));
}

Point ToCeiledPoint(const PointF& point) {
  return Point(base::ClampCeil(point.x()), base::ClampCeil(point.y()));
}

Point ToRoundedPoint(const PointF& point) {
  return Point(base::ClampRound(point.x()), base::ClampRound(point.y()));
}

}  // namespace gfx

