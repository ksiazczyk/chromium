// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test runner for cr_test
// summary: C++ browser test that loads the ash_common cr_test.html page and runs the cr_test.js mocha suite.
// ---

#include "chrome/test/base/web_ui_mocha_browser_test.h"
#include "content/public/test/browser_test.h"

using WebUIResourceBrowserTest = WebUIMochaBrowserTest;

IN_PROC_BROWSER_TEST_F(WebUIResourceBrowserTest, CrTest) {
  set_test_loader_host("webui-test/chromeos/ash_common/cr_test.html");
  RunTestWithoutTestLoader("chromeos/ash_common/cr_test.js", "mocha.run()");
}
