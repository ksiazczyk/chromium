// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NullMouseWarpController class declaration
// summary: Declares the no-op MouseWarpController used when there is a single desktop display, in single display or mirror mode.
// relations:
//   - depends_on /ash/display/mouse_warp_controller.h
//   - implements /ash/display/mouse_warp_controller.h
// ---

#ifndef ASH_DISPLAY_NULL_MOUSE_WARP_CONTROLLER_H_
#define ASH_DISPLAY_NULL_MOUSE_WARP_CONTROLLER_H_

#include "ash/display/mouse_warp_controller.h"

namespace ash {

// A MouseWarpController when there is one desktop display
// (in single display or mirror mode).
class NullMouseWarpController : public MouseWarpController {
 public:
  NullMouseWarpController() {}

  NullMouseWarpController(const NullMouseWarpController&) = delete;
  NullMouseWarpController& operator=(const NullMouseWarpController&) = delete;

  // MouseWarpController:
  bool WarpMouseCursor(ui::MouseEvent* event) override;
  void SetEnabled(bool enable) override;
};

}  // namespace ash

#endif  // ASH_DISPLAY_NULL_MOUSE_WARP_CONTROLLER_H_
