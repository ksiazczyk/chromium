// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Interactive UI test invoking BrowserUiTestBase
// summary: Runs the Invoke entry point of BrowserUiTestBase as an interactive UI test for local UI inspection.
// ---

#include "chrome/browser/ui/test/browser_ui_test_base.h"
#include "testing/gtest/include/gtest/gtest.h"

using BrowserInteractiveUiTest = BrowserUiTestBase;

TEST_F(BrowserInteractiveUiTest, Invoke) {
  Invoke();
}
