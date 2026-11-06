// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Notebooks internals WebUI browser test
// summary: C++ browser test that enables internal-only URLs and runs the notebooks internals WebUI mocha test suite.
// ---

#include "chrome/browser/browser_process.h"
#include "chrome/test/base/web_ui_mocha_browser_test.h"
#include "components/notebooks/public/notebooks_constants.h"
#include "components/prefs/pref_service.h"
#include "components/webui/chrome_urls/pref_names.h"
#include "content/public/test/browser_test.h"

class NotebooksInternalsBrowserTest : public WebUIMochaBrowserTest {
 public:
  NotebooksInternalsBrowserTest() {
    set_test_loader_host(notebooks::kChromeUINotebooksInternalsHost);
  }
};

IN_PROC_BROWSER_TEST_F(NotebooksInternalsBrowserTest, InternalsPageOpen) {
  g_browser_process->local_state()->SetBoolean(
      chrome_urls::kInternalOnlyUisEnabled, true);
  RunTestWithoutTestLoader("notebooks_internals/notebooks_internals_test.js",
                           "mocha.run()");
}
