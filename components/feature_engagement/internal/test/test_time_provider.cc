// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test time provider implementation
// summary: Implements a controllable TimeProvider that returns a test-set current day and time for feature engagement tests.
// ---

#include "components/feature_engagement/internal/test/test_time_provider.h"

namespace feature_engagement {

void TestTimeProvider::SetCurrentDay(uint32_t current_day) {
  current_day_ = current_day;
}

void TestTimeProvider::SetCurrentTime(base::Time now) {
  now_ = now;
}

uint32_t TestTimeProvider::GetCurrentDay() const {
  return current_day_;
}

base::Time TestTimeProvider::Now() const {
  return now_;
}

}  // namespace feature_engagement
