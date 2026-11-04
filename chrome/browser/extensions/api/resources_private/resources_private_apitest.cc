// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for the resourcesPrivate getStrings API
// summary: Runs an in-process browser extension test that loads the resources_private/get_strings test extension as a component and verifies the getStrings call succeeds.
// ---

#include "chrome/browser/extensions/extension_apitest.h"
#include "content/public/test/browser_test.h"

using ResourcesPrivateApiTest = extensions::ExtensionApiTest;

IN_PROC_BROWSER_TEST_F(ResourcesPrivateApiTest, GetStrings) {
  ASSERT_TRUE(RunExtensionTest("resources_private/get_strings", {},
                               {.load_as_component = true}))
      << message_;
}
