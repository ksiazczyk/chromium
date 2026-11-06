// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebNN ORT test base implementation
// summary: Test fixture setup that skips ORT tests when the ORT platform functions fail to initialize.
// ---

#include "services/webnn/ort/test_base_ort.h"

#include "services/webnn/ort/platform_functions_ort.h"

namespace webnn::ort {

void TestBaseOrt::SetUp() {
  if (!PlatformFunctions::EnsureInitialized()) {
    GTEST_SKIP() << "Failed to initialize ORT platform functions.";
  }
}

}  // namespace webnn::ort
