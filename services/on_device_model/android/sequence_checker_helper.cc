// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sequence checker helper implementation
// summary: Implements a helper that runs tasks immediately when already on the creating sequence and otherwise posts them to that sequence's task runner.
// ---

#include "services/on_device_model/android/sequence_checker_helper.h"

#include "base/task/sequenced_task_runner.h"

namespace on_device_model {

SequenceCheckerHelper::SequenceCheckerHelper()
    : task_runner_(base::SequencedTaskRunner::GetCurrentDefault()) {}

SequenceCheckerHelper::~SequenceCheckerHelper() = default;

void SequenceCheckerHelper::PostTask(const base::Location& from_here,
                                     base::OnceClosure task) {
  if (task_runner_->RunsTasksInCurrentSequence()) {
    std::move(task).Run();
  } else {
    task_runner_->PostTask(from_here, std::move(task));
  }
}

}  // namespace on_device_model
