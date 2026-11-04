// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock notification background task scheduler implementation
// summary: Defines the constructor and destructor of the mock notification background task scheduler used in scheduler tests.
// ---

#include "chrome/browser/notifications/scheduler/test/mock_notification_background_task_scheduler.h"

namespace notifications {
namespace test {

MockNotificationBackgroundTaskScheduler::
    MockNotificationBackgroundTaskScheduler() = default;
MockNotificationBackgroundTaskScheduler::
    ~MockNotificationBackgroundTaskScheduler() = default;

}  // namespace test
}  // namespace notifications
