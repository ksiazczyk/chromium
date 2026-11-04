// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background scripts API test
// summary: Browser API test that runs the background_scripts extension test to verify extension background script behavior.
// ---

#include "chrome/browser/extensions/extension_apitest.h"
#include "content/public/test/browser_test.h"

namespace extensions {

IN_PROC_BROWSER_TEST_F(ExtensionApiTest, BackgroundScripts) {
  ASSERT_TRUE(RunExtensionTest("background_scripts")) << message_;
}

}  // namespace extensions
