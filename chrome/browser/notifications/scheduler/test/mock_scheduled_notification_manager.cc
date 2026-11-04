// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// ---docerion
// type: test
// title: Mock scheduled notification manager implementation
// summary: Defines the constructor and destructor of the mock scheduled notification manager used in scheduler tests.
// ---

#include "chrome/browser/notifications/scheduler/test/mock_scheduled_notification_manager.h"

namespace notifications {
namespace test {

MockScheduledNotificationManager::MockScheduledNotificationManager() = default;

MockScheduledNotificationManager::~MockScheduledNotificationManager() = default;

}  // namespace test
}  // namespace notifications
