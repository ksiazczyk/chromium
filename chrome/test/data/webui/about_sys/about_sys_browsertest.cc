// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: About sys WebUI browser test
// summary: Browser test that loads the system info WebUI page and runs its about_sys mocha test suite via the WebUI mocha browser test harness.
// ---

#include "chrome/common/webui_url_constants.h"
#include "chrome/test/base/web_ui_mocha_browser_test.h"
#include "content/public/test/browser_test.h"

using SystemInfoBrowserTest = WebUIMochaBrowserTest;

IN_PROC_BROWSER_TEST_F(SystemInfoBrowserTest, AboutSystem) {
  set_test_loader_host(chrome::kChromeUISystemInfoHost);
  RunTest("about_sys/about_sys_test.js", "mocha.run()");
}
