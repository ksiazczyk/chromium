// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ToolbarControllerUtil declaration
// summary: Declares ToolbarControllerUtil, a static helper letting tests control whether toolbar buttons are prevented from overflowing.
// ---

#ifndef CHROME_BROWSER_UI_TOOLBAR_CONTROLLER_UTIL_H_
#define CHROME_BROWSER_UI_TOOLBAR_CONTROLLER_UTIL_H_
class ToolbarControllerUtil {
 public:
  // Set whether prevent toolbar buttons from overflow. Should only call by
  // tests.
  static void SetPreventOverflowForTesting(bool prevent_overflow);

  // Return whether should prevent toolbar buttons from overflow.
  static bool PreventOverflow();

 private:
  static bool prevent_overflow_for_testing_;
};
#endif  // CHROME_BROWSER_UI_TOOLBAR_CONTROLLER_UTIL_H_
