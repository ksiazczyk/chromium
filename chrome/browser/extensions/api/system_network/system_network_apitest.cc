// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: System network extension API browser test
// summary: Runs a browser test that verifies the system_network extension API using the ExtensionApiTest harness and asserts extensions core support is enabled.
// ---

#include "chrome/browser/extensions/extension_apitest.h"
#include "content/public/test/browser_test.h"
#include "extensions/buildflags/buildflags.h"

static_assert(BUILDFLAG(ENABLE_EXTENSIONS_CORE));

namespace extensions {
namespace {

using SystemNetworkApiTest = ExtensionApiTest;

IN_PROC_BROWSER_TEST_F(SystemNetworkApiTest, SystemNetworkExtension) {
  ASSERT_TRUE(RunExtensionTest("system_network")) << message_;
}

}  // namespace
}  // namespace extensions
