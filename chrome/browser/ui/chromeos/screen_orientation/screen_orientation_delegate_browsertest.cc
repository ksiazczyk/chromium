// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for the screen orientation delegate
// summary: In-process browser test verifying that a screen orientation delegate is created and set, serving as a regression test for crbug 40595741.
// ---

#include "chrome/test/base/in_process_browser_test.h"
#include "content/public/test/browser_test.h"
#include "content/public/test/browser_test_utils.h"
#include "ui/base/ui_base_features.h"

using ScreenOrientationDelegateChromeosTest = InProcessBrowserTest;

// Tests that an orientation delegate is created and set. Regression test for
// https://crbug.com/40595741
IN_PROC_BROWSER_TEST_F(ScreenOrientationDelegateChromeosTest, Basic) {
  EXPECT_NE(nullptr, content::GetScreenOrientationDelegate());
}
