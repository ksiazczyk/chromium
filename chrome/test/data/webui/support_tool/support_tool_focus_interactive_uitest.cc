// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Support tool focus interactive UI test
// summary: C++ browser test that loads the support tool WebUI in a focus test harness and runs its Mocha test suite.
// ---

#include "base/test/scoped_feature_list.h"
#include "chrome/common/webui_url_constants.h"
#include "chrome/test/base/web_ui_mocha_browser_test.h"
#include "content/public/test/browser_test.h"

class SupportToolTest : public WebUIMochaFocusTest {
 protected:
  SupportToolTest() { set_test_loader_host(chrome::kChromeUISupportToolHost); }
};

IN_PROC_BROWSER_TEST_F(SupportToolTest, All) {
  RunTest("support_tool/support_tool_test.js", "mocha.run()");
}
