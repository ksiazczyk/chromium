// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Feedback UI unit tests
// summary: Unit tests verifying that FeedbackUI::IsFeedbackEnabled reflects the kUserFeedbackAllowed preference for a testing profile.
// ---

#include "chrome/browser/ui/webui/feedback/feedback_ui.h"

#include "chrome/common/pref_names.h"
#include "chrome/test/base/testing_profile.h"
#include "components/prefs/pref_service.h"
#include "content/public/test/browser_task_environment.h"
#include "testing/gtest/include/gtest/gtest.h"

class FeedbackUITest : public testing::Test {
 protected:
  FeedbackUITest() { profile_ = std::make_unique<TestingProfile>(); }

  content::BrowserTaskEnvironment task_environment_;
  std::unique_ptr<TestingProfile> profile_;
};

TEST_F(FeedbackUITest, IsFeedbackEnabledTrue) {
  profile_->GetPrefs()->SetBoolean(prefs::kUserFeedbackAllowed, true);
  EXPECT_TRUE(FeedbackUI::IsFeedbackEnabled(profile_.get()));
}

TEST_F(FeedbackUITest, IsFeedbackEnabledFalse) {
  profile_->GetPrefs()->SetBoolean(prefs::kUserFeedbackAllowed, false);
  EXPECT_FALSE(FeedbackUI::IsFeedbackEnabled(profile_.get()));
}
