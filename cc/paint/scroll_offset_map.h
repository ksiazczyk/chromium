// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scroll offset map type definition
// summary: Defines the ScrollOffsetMap type alias that maps element IDs to scroll offset points using a base flat map.
// ---

#ifndef CC_PAINT_SCROLL_OFFSET_MAP_H_
#define CC_PAINT_SCROLL_OFFSET_MAP_H_

#include "base/containers/flat_map.h"
#include "cc/paint/element_id.h"
#include "ui/gfx/geometry/point_f.h"

namespace cc {

using ScrollOffsetMap = base::flat_map<ElementId, gfx::PointF>;

}  // namespace cc

#endif  // CC_PAINT_SCROLL_OFFSET_MAP_H_
