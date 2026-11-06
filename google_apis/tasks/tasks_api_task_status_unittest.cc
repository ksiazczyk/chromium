// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for task status conversion
// summary: Checks that task status strings convert to the expected enum values and back, including unknown input and death on serializing an unknown status.
// ---

#include "google_apis/tasks/tasks_api_task_status.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace google_apis::tasks {

TEST(TasksApiTaskStatusTest, ConvertsToEnumValue) {
  EXPECT_EQ(TaskStatusFromString("completed"), TaskStatus::kCompleted);
  EXPECT_EQ(TaskStatusFromString("needsAction"), TaskStatus::kNeedsAction);
  EXPECT_EQ(TaskStatusFromString("???"), TaskStatus::kUnknown);
}

TEST(TasksApiTaskStatusTest, ConvertsToString) {
  EXPECT_EQ(TaskStatusToString(TaskStatus::kCompleted), "completed");
  EXPECT_EQ(TaskStatusToString(TaskStatus::kNeedsAction), "needsAction");
  EXPECT_DEATH(TaskStatusToString(TaskStatus::kUnknown), "");
}

}  // namespace google_apis::tasks
