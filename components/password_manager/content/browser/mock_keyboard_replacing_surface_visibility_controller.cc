// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock keyboard replacing surface visibility controller
// summary: GMock implementation of the keyboard-replacing surface visibility controller interface, providing weak pointer support for tests.
// ---

#include "components/password_manager/content/browser/mock_keyboard_replacing_surface_visibility_controller.h"

namespace password_manager {

MockKeyboardReplacingSurfaceVisibilityController::
    MockKeyboardReplacingSurfaceVisibilityController() = default;

MockKeyboardReplacingSurfaceVisibilityController::
    ~MockKeyboardReplacingSurfaceVisibilityController() = default;

base::WeakPtr<KeyboardReplacingSurfaceVisibilityController>
MockKeyboardReplacingSurfaceVisibilityController::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace password_manager
