// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Profile activity metrics recorder browser test
// summary: Browser test verifying that base::RecordAction can be called after BrowserProcess shutdown without causing a use-after-free.
// ---

#include "chrome/browser/profiles/profile_activity_metrics_recorder.h"

#include "base/metrics/user_metrics.h"
#include "chrome/test/base/in_process_browser_test.h"
#include "content/public/test/browser_test.h"

// Checks that base::RecordAction() can be called without issue after
// BrowserProcess shutdown. The test fixture destructor gets called
// after shutdown, so we call it there.
//
// Regression test for crbug.com/40135406 where these calls lead to a
// use-after-free.
class ProfileActivityMetricsRecorderLogAfterQuitTest
    : public InProcessBrowserTest {
 public:
  ~ProfileActivityMetricsRecorderLogAfterQuitTest() override {
    base::RecordAction(base::UserMetricsAction("Test_Action"));
  }
};

IN_PROC_BROWSER_TEST_F(ProfileActivityMetricsRecorderLogAfterQuitTest, Test) {}
