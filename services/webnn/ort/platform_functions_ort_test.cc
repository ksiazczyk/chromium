// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebNN ORT platform functions unit tests
// summary: Verifies that all ORT API function tables are non-null after platform function initialization.
// ---

#include "services/webnn/ort/platform_functions_ort.h"

#include "services/webnn/ort/test_base_ort.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace webnn::ort {

class WebNNOrtPlatformFunctionsTest : public TestBaseOrt {};

TEST_F(WebNNOrtPlatformFunctionsTest, AllFunctionsLoaded) {
  PlatformFunctions* platformFunctions = PlatformFunctions::GetInstance();
  EXPECT_TRUE(platformFunctions->ort_api());
  EXPECT_TRUE(platformFunctions->ort_model_editor_api());
  EXPECT_TRUE(platformFunctions->ort_compile_api());
  EXPECT_TRUE(platformFunctions->ort_interop_api());
}

}  // namespace webnn::ort
