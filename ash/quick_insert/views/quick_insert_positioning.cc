// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert positioning implementation
// summary: Computes the anchor bounds for the Quick Insert window, preferring padded caret bounds and falling back to the cursor point.
// relations:
//   - implements /ash/quick_insert/views/quick_insert_positioning.h
//   - depends_on /ui/gfx/geometry/outsets.h
//   - depends_on /ui/gfx/geometry/point.h
// ---

#include "ash/quick_insert/views/quick_insert_positioning.h"

#include "ui/gfx/geometry/outsets.h"
#include "ui/gfx/geometry/point.h"
#include "ui/gfx/geometry/rect.h"

namespace ash {
namespace {

// Padding to separate the Quick Insert window from the caret.
constexpr gfx::Outsets kPaddingAroundCaret(4);

}  // namespace

gfx::Rect GetQuickInsertAnchorBounds(const gfx::Rect& caret_bounds,
                                     const gfx::Point& cursor_point,
                                     const gfx::Rect& focused_window_bounds) {
  if (caret_bounds != gfx::Rect() &&
      focused_window_bounds.Contains(caret_bounds)) {
    gfx::Rect anchor_rect = caret_bounds;
    anchor_rect.Outset(kPaddingAroundCaret);
    return anchor_rect;
  } else {
    return gfx::Rect(cursor_point, gfx::Size());
  }
}

}  // namespace ash
