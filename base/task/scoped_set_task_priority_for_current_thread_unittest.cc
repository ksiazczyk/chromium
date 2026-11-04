// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for ScopedSetTaskPriorityForCurrentThread
// summary: Checks that the scoped priority override applies inside the scope and reverts to USER_BLOCKING afterwards.
// ---

#include "base/task/scoped_set_task_priority_for_current_thread.h"

#include "base/task/task_traits.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace base::internal {

TEST(ScopedSetTaskPriorityForCurrentThreadTest,
     ScopedSetTaskPriorityForCurrentThread) {
  EXPECT_EQ(TaskPriority::USER_BLOCKING, GetTaskPriorityForCurrentThread());
  {
    ScopedSetTaskPriorityForCurrentThread
        scoped_set_task_priority_for_current_thread(TaskPriority::BEST_EFFORT);
    EXPECT_EQ(TaskPriority::BEST_EFFORT, GetTaskPriorityForCurrentThread());
  }
  EXPECT_EQ(TaskPriority::USER_BLOCKING, GetTaskPriorityForCurrentThread());
}

}  // namespace base::internal
