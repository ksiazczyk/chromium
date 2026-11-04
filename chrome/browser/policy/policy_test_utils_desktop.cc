// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Desktop navigation helper for policy tests
// summary: Provides the desktop implementation of PolicyTest::NavigateToUrl used by policy browser tests.
// ---

#include <utility>

#include "chrome/browser/policy/policy_test_utils.h"
#include "chrome/test/base/chrome_test_utils.h"
#include "chrome/test/base/ui_test_utils.h"
#include "url/gurl.h"

namespace policy {

bool PolicyTest::NavigateToUrl(GURL url, PlatformBrowserTest* browser_test) {
  return ui_test_utils::NavigateToURL(browser_test->browser(), url);
}

}  // namespace policy
