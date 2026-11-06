// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: V8 foreground task runner base implementation
// summary: Implements the V8ForegroundTaskRunnerBase constructor, destructor, and idle task enabling shared by foreground task runner variants.
// ---

#include "v8_foreground_task_runner_base.h"

namespace gin {

V8ForegroundTaskRunnerBase::V8ForegroundTaskRunnerBase() = default;

V8ForegroundTaskRunnerBase::~V8ForegroundTaskRunnerBase() = default;

void V8ForegroundTaskRunnerBase::EnableIdleTasks(
    std::unique_ptr<V8IdleTaskRunner> idle_task_runner) {
  idle_task_runner_ = std::move(idle_task_runner);
}

bool V8ForegroundTaskRunnerBase::IdleTasksEnabled() {
  return idle_task_runner() != nullptr;
}

}  // namespace gin
