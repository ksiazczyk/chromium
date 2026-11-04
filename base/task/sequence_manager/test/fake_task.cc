// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake task implementations for sequence manager tests
// summary: Implements FakeTask and FakeTaskTiming, lightweight fake Task and TaskTiming objects used as test helpers in sequence manager tests.
// ---

#include "base/task/sequence_manager/test/fake_task.h"

namespace base::sequence_manager {

FakeTask::FakeTask() : FakeTask(0 /* task_type */) {}

FakeTask::FakeTask(TaskType task_type)
    : Task(internal::PostedTask(nullptr,
                                OnceClosure(),
                                FROM_HERE,
                                base::TimeDelta(),
                                Nestable::kNestable,
                                task_type),
           EnqueueOrder(),
           EnqueueOrder(),
           TimeTicks()) {}

FakeTaskTiming::FakeTaskTiming() : TaskTiming(false /* has_wall_time */) {}

FakeTaskTiming::FakeTaskTiming(TimeTicks start, TimeTicks end)
    : FakeTaskTiming() {
  has_wall_time_ = true;
  start_time_ = start;
  end_time_ = end;
  state_ = State::Finished;
}

}  // namespace base::sequence_manager
