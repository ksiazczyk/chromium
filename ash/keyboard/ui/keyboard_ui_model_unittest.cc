// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Keyboard UI model unit tests
// summary: Unit tests for KeyboardUIModel verifying valid and invalid keyboard UI state transitions, including an expected DCHECK failure on an invalid transition.
// relations:
//   - tests /ash/keyboard/ui/keyboard_ui_model.h
//   - depends_on /base/test/gtest_util.h
//   - depends_on /base/test/metrics/histogram_tester.h
// ---

#include "ash/keyboard/ui/keyboard_ui_model.h"

#include "base/test/gtest_util.h"
#include "base/test/metrics/histogram_tester.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace keyboard {

TEST(KeyboardUIModelTest, ChangeToValidState) {
  base::HistogramTester histogram_tester;

  KeyboardUIModel model;
  ASSERT_EQ(KeyboardUIState::kInitial, model.state());

  model.ChangeState(KeyboardUIState::kLoading);
}

// Test fails DCHECK when the state transition is invalid. This is expected.
TEST(KeyboardUIModelTest, ChangeToInvalidStateDCHECKs) {
  base::HistogramTester histogram_tester;

  KeyboardUIModel model;
  ASSERT_EQ(KeyboardUIState::kInitial, model.state());

  EXPECT_DCHECK_DEATH(model.ChangeState(KeyboardUIState::kShown));
}

}  // namespace keyboard
