// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Focus row behavior interactive UI test runner
// summary: Runs the cr-focus-row-behavior Mocha test as an interactive WebUI focus browser test.
// ---

#include "chrome/test/base/web_ui_mocha_browser_test.h"
#include "content/public/test/browser_test.h"

typedef WebUIMochaFocusTest CrFocusRowBehaviorTest;

IN_PROC_BROWSER_TEST_F(CrFocusRowBehaviorTest, FocusTest) {
  RunTest("chromeos/cr_focus_row_behavior_test.js", "mocha.run()");
}
