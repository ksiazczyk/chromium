// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CHECK_IS_TEST unit test
// summary: Verifies that CHECK_IS_TEST succeeds when test mode has been enabled by the unit test launcher before the test runs.
// ---

#include "base/check_is_test.h"

#include "testing/gtest/include/gtest/gtest.h"

// Note: `base::AllowCheckIsTestForTesting` is being called in
// `base/test/launcher/unit_test_launcher.cc` before this test is run.
//
// Thus, `CHECK_IS_TEST()` will succeed.
TEST(CheckIsTest, Usage) {
  CHECK_IS_TEST();
}
