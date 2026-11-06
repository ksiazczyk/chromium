// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TabGroupShared browser test
// summary: C++ WebUI mocha browser test that loads the tab-search WebUI and runs the tab_group_dot test suite.
// ---

#include "chrome/common/webui_url_constants.h"
#include "chrome/test/base/web_ui_mocha_browser_test.h"
#include "content/public/test/browser_test.h"

class TabGroupSharedBrowserTest : public WebUIMochaBrowserTest {
 protected:
  TabGroupSharedBrowserTest() {
    set_test_loader_host(chrome::kChromeUITabSearchHost);
  }
};

IN_PROC_BROWSER_TEST_F(TabGroupSharedBrowserTest, TabGroupDot) {
  RunTest("tab_group_shared/tab_group_dot_test.js", "mocha.run()");
}
