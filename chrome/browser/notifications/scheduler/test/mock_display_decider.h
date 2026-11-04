// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Display decider mock for scheduler tests
// summary: Declares a gmock mock of DisplayDecider that mocks finding notifications to show in scheduler tests.
// ---

#ifndef CHROME_BROWSER_NOTIFICATIONS_SCHEDULER_TEST_MOCK_DISPLAY_DECIDER_H_
#define CHROME_BROWSER_NOTIFICATIONS_SCHEDULER_TEST_MOCK_DISPLAY_DECIDER_H_

#include "chrome/browser/notifications/scheduler/internal/display_decider.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace notifications {
namespace test {

class MockDisplayDecider : public DisplayDecider {
 public:
  MockDisplayDecider();
  ~MockDisplayDecider() override;
  MOCK_METHOD3(FindNotificationsToShow,
               void(Notifications, ClientStates, Results*));
};

}  // namespace test
}  // namespace notifications

#endif  // CHROME_BROWSER_NOTIFICATIONS_SCHEDULER_TEST_MOCK_DISPLAY_DECIDER_H_
