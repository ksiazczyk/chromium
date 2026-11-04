// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: NullTaskRunner implementation
// summary: Implements a task runner that discards posted tasks and always reports that tasks run in the current sequence.
// ---

#include "base/test/null_task_runner.h"

#include "base/time/time.h"

namespace base {

NullTaskRunner::NullTaskRunner() = default;

NullTaskRunner::~NullTaskRunner() = default;

bool NullTaskRunner::PostDelayedTask(const Location& from_here,
                                     OnceClosure task,
                                     base::TimeDelta delay) {
  return false;
}

bool NullTaskRunner::PostNonNestableDelayedTask(const Location& from_here,
                                                OnceClosure task,
                                                base::TimeDelta delay) {
  return false;
}

bool NullTaskRunner::RunsTasksInCurrentSequence() const {
  return true;
}

}  // namespace base
