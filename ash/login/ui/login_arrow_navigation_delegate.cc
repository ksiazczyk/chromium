// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Login arrow key navigation delegate
// summary: Handles arrow key events on the login screen, moving focus to the previous or next user for left and right keys.
// relations:
//   - implements /ash/login/ui/login_arrow_navigation_delegate.h
//   - depends_on /ash/login/ui/lock_screen.h
// ---

#include "ash/login/ui/login_arrow_navigation_delegate.h"

#include "ash/login/ui/lock_screen.h"

namespace ash {

bool LoginArrowNavigationDelegate::HandleKeyEvent(
    const ui::KeyEvent& key_event) {
  switch (key_event.key_code()) {
    case ui::VKEY_LEFT:
      return HandleKeyLeft();
    case ui::VKEY_RIGHT:
      return HandleKeyRight();
    case ui::VKEY_UP:
      return HandleKeyUp();
    case ui::VKEY_DOWN:
      return HandleKeyDown();
    default:
      return false;
  }
}

bool LoginScreenArrowNavigationDelegate::HandleKeyLeft() {
  LockScreen::Get()->FocusPreviousUser();
  return true;
}

bool LoginScreenArrowNavigationDelegate::HandleKeyRight() {
  LockScreen::Get()->FocusNextUser();
  return true;
}

bool LoginScreenArrowNavigationDelegate::HandleKeyUp() {
  return false;
}

bool LoginScreenArrowNavigationDelegate::HandleKeyDown() {
  return false;
}

}  // namespace ash
