// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Connect OneDrive browser test
// summary: Browser test that loads the cloud upload WebUI for non-managed users and runs the JavaScript tests for the Connect OneDrive page.
// ---

#include "ash/constants/webui_url_constants.h"
#include "chrome/browser/ui/webui/ash/cloud_upload/cloud_upload_dialog_browsertest.h"
#include "content/public/test/browser_test.h"

using ConnectOneDriveTest = NonManagedUserWebUIBrowserTest;

IN_PROC_BROWSER_TEST_F(ConnectOneDriveTest, All) {
  set_test_loader_host(ash::kChromeUICloudUploadHost);
  RunTest("chromeos/cloud_upload/connect_onedrive_test.js", "mocha.run()");
}
