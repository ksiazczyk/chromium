// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ContentBrowserTestBase setup implementation
// summary: Implements SetUpOnMainThread for ContentBrowserTestBase by starting the embedded test server and mapping all hosts to localhost.
// ---

#include "content/test/content_browser_test_base.h"

#include "net/dns/mock_host_resolver.h"
#include "net/test/embedded_test_server/embedded_test_server.h"

namespace content {

void ContentBrowserTestBase::SetUpOnMainThread() {
  ASSERT_TRUE(embedded_test_server()->Start());
  host_resolver()->AddRule("*", "127.0.0.1");
}

}  // namespace content
