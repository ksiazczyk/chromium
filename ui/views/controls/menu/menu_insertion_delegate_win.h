// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows menu insertion delegate interface
// summary: Declares a small Windows-specific delegate interface that returns the index at which items should be inserted into a native HMENU.
// ---

#ifndef UI_VIEWS_CONTROLS_MENU_MENU_INSERTION_DELEGATE_WIN_H_
#define UI_VIEWS_CONTROLS_MENU_MENU_INSERTION_DELEGATE_WIN_H_

#include <windows.h>

namespace views {

class MenuInsertionDelegateWin {
 public:
  // Returns the index to insert items into the menu at.
  virtual size_t GetInsertionIndex(HMENU native_menu) = 0;

 protected:
  virtual ~MenuInsertionDelegateWin() = default;
};

}  // namespace views

#endif  // UI_VIEWS_CONTROLS_MENU_MENU_INSERTION_DELEGATE_WIN_H_
