// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: User adding screen utilities header
// summary: Declares the ShowUserAddingScreen test helper that shows the user adding screen and waits for it to appear.
// ---

#ifndef CHROME_BROWSER_ASH_LOGIN_TEST_USER_ADDING_SCREEN_UTILS_H_
#define CHROME_BROWSER_ASH_LOGIN_TEST_USER_ADDING_SCREEN_UTILS_H_

namespace ash {
namespace test {

// Utility function for user adding screen that waits for the user adding screen
// to be shown.
void ShowUserAddingScreen();

}  // namespace test
}  // namespace ash

#endif  // CHROME_BROWSER_ASH_LOGIN_TEST_USER_ADDING_SCREEN_UTILS_H_
