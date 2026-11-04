// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test keyboard controller observer implementation
// summary: Implements a test observer that counts keyboard enabled and disabled events.
// relations:
//   - implements /ash/keyboard/ui/test/test_keyboard_controller_observer.h
// ---

#include "ash/keyboard/ui/test/test_keyboard_controller_observer.h"

namespace keyboard {

TestKeyboardControllerObserver::TestKeyboardControllerObserver() = default;

TestKeyboardControllerObserver::~TestKeyboardControllerObserver() = default;

void TestKeyboardControllerObserver::OnKeyboardEnabledChanged(bool is_enabled) {
  if (is_enabled) {
    enabled_count++;
  } else {
    disabled_count++;
  }
}

}  // namespace keyboard
