// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background task coordinator mock implementation
// summary: Implements the constructor and destructor of the background task coordinator mock used in scheduler tests.
// ---

#include "chrome/browser/notifications/scheduler/test/mock_background_task_coordinator.h"

namespace notifications {
namespace test {

MockBackgroundTaskCoordinator::MockBackgroundTaskCoordinator() = default;

MockBackgroundTaskCoordinator::~MockBackgroundTaskCoordinator() = default;

}  // namespace test
}  // namespace notifications
