// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Testing browser process death test mixin implementation
// summary: Creates a global TestingBrowserProcess in the mixin constructor when none exists, supporting death tests that depend on it.
// ---

#include "chrome/test/base/testing_browser_process_death_test_mixin.h"

#include "chrome/test/base/testing_browser_process.h"

namespace chrome_test_utils {

TestingBrowserProcessDeathTestMixin::TestingBrowserProcessDeathTestMixin() {
  if (!TestingBrowserProcess::GetGlobal()) {
    TestingBrowserProcess::CreateInstance();
  }
}

}  // namespace chrome_test_utils
