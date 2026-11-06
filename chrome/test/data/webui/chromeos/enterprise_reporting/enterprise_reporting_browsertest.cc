// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Enterprise reporting UI browser test
// summary: Browser test that enables the enterprise reporting feature and runs the mocha test suite for the enterprise reporting WebUI page.
// ---

#include "ash/constants/ash_features.h"
#include "ash/constants/webui_url_constants.h"
#include "base/test/scoped_feature_list.h"
#include "chrome/test/base/web_ui_mocha_browser_test.h"
#include "content/public/test/browser_test.h"

namespace reporting {
namespace {

class EnterpriseReportingUITest : public WebUIMochaBrowserTest {
 protected:
  base::test::ScopedFeatureList scoped_feature_list_{
      ash::features::kEnterpriseReportingUI};
};

IN_PROC_BROWSER_TEST_F(EnterpriseReportingUITest, App) {
  set_test_loader_host(ash::kChromeUIEnterpriseReportingHost);
  RunTest("chromeos/enterprise_reporting/enterprise_reporting_test.js",
          "mocha.run()");
}

}  // namespace
}  // namespace reporting
