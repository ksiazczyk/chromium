// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock notification schedule service implementation
// summary: Defines the constructor and destructor of the mock notification schedule service used in scheduler tests.
// ---

#include "chrome/browser/notifications/scheduler/test/mock_notification_schedule_service.h"

namespace notifications {
namespace test {

MockNotificationScheduleService::MockNotificationScheduleService() = default;

MockNotificationScheduleService::~MockNotificationScheduleService() = default;

}  // namespace test
}  // namespace notifications
