// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PiP test utilities implementation
// summary: Implements ForceHideShelvesForTest, a helper that hides shelves on all root window controllers for Ash tests.
// ---

#include "ash/wm/pip/pip_test_utils.h"

#include "ash/root_window_controller.h"
#include "ash/shelf/shelf.h"
#include "ash/shell.h"

namespace ash {

void ForceHideShelvesForTest() {
  for (auto* root_window_controller : Shell::GetAllRootWindowControllers()) {
    auto* shelf = root_window_controller->shelf();
    shelf->SetAutoHideBehavior(ShelfAutoHideBehavior::kAlwaysHidden);
  }
}

}  // namespace ash
