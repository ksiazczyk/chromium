// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OpenXR stage bounds provider interface
// summary: Defines an abstract interface that returns the bounds of the current OpenXR stage as clockwise-ordered 3D points.
// ---

#ifndef DEVICE_VR_OPENXR_OPENXR_STAGE_BOUNDS_PROVIDER_H_
#define DEVICE_VR_OPENXR_OPENXR_STAGE_BOUNDS_PROVIDER_H_

#include <vector>

namespace gfx {
class Point3F;
}  // namespace gfx

namespace device {

class OpenXrStageBoundsProvider {
 public:
  virtual ~OpenXrStageBoundsProvider() = default;

  // Returns the bounds of the current stage, with points defined in a clockwise
  // order.
  virtual std::vector<gfx::Point3F> GetStageBounds() = 0;
};
}  // namespace device

#endif  // DEVICE_VR_OPENXR_OPENXR_STAGE_BOUNDS_PROVIDER_H_
