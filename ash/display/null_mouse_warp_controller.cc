// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Null mouse warp controller implementation
// summary: Implements a no-op MouseWarpController whose warp and enable methods do nothing, so the cursor is never warped.
// relations:
//   - depends_on /ash/display/null_mouse_warp_controller.h
// ---

#include "ash/display/null_mouse_warp_controller.h"

namespace ash {

bool NullMouseWarpController::WarpMouseCursor(ui::MouseEvent* event) {
  return false;
}

void NullMouseWarpController::SetEnabled(bool enable) {}

}  // namespace ash
