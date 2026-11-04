// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background page Canvas2D API test
// summary: Browser API test that runs the canvas_2d extension test to verify Canvas2D behavior in extension background pages.
// ---

#include "chrome/browser/extensions/extension_apitest.h"
#include "content/public/test/browser_test.h"

namespace extensions {

IN_PROC_BROWSER_TEST_F(ExtensionApiTest, Canvas2D) {
  ASSERT_TRUE(RunExtensionTest("canvas_2d")) << message_;
}

}  // namespace extensions
