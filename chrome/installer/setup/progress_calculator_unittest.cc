// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for ProgressCalculator
// summary: Verifies that calculated progress values increase monotonically and stay within 0-100 across all installer stages.
// ---

#include "chrome/installer/setup/progress_calculator.h"

#include "chrome/installer/util/util_constants.h"
#include "testing/gtest/include/gtest/gtest.h"

TEST(ProgressCalculatorTest, Test) {
  ProgressCalculator progress_calculator;

  int last_progress = 0;
  for (int i = 1; i < installer::NUM_STAGES; ++i) {
    int progress = progress_calculator.Calculate(
        static_cast<installer::InstallerStage>(i));
    EXPECT_GE(progress, 0);
    EXPECT_LE(progress, 100);
    EXPECT_GT(progress, last_progress);
    last_progress = progress;
  }
  EXPECT_EQ(100, last_progress);
}
