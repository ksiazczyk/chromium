// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Task switch time tracker test API implementation
// summary: Implements a test API for TaskSwitchTimeTracker that injects a mock tick clock and advances time during tests.
// relations:
//   - depends_on /ash/metrics/task_switch_time_tracker_test_api.h
//   - depends_on /ash/metrics/task_switch_time_tracker.h
// ---

#include "ash/metrics/task_switch_time_tracker_test_api.h"

#include "ash/metrics/task_switch_time_tracker.h"

namespace ash {

TaskSwitchTimeTrackerTestAPI::TaskSwitchTimeTrackerTestAPI(
    const std::string& histogram_name) {
  time_tracker_.reset(new TaskSwitchTimeTracker(histogram_name, &tick_clock_));
}

TaskSwitchTimeTrackerTestAPI::~TaskSwitchTimeTrackerTestAPI() {}

void TaskSwitchTimeTrackerTestAPI::Advance(base::TimeDelta time_delta) {
  tick_clock_.Advance(time_delta);
}

bool TaskSwitchTimeTrackerTestAPI::HasLastActionTime() const {
  return time_tracker_->HasLastActionTime();
}

}  // namespace ash
