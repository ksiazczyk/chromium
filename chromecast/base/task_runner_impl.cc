// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Task runner implementation
// summary: Implements TaskRunnerImpl, which posts Chromecast Task objects as delayed tasks on a single-thread task runner for vendor backend use.
// ---

#include "chromecast/base/task_runner_impl.h"

#include "base/functional/bind.h"
#include "base/location.h"
#include "base/task/single_thread_task_runner.h"
#include "base/time/time.h"

namespace chromecast {

TaskRunnerImpl::TaskRunnerImpl()
    : TaskRunnerImpl(base::SingleThreadTaskRunner::GetCurrentDefault()) {}

TaskRunnerImpl::TaskRunnerImpl(
    scoped_refptr<base::SingleThreadTaskRunner> runner)
    : runner_(std::move(runner)) {
  DCHECK(runner_.get());
}

TaskRunnerImpl::~TaskRunnerImpl() {}

bool TaskRunnerImpl::PostTask(Task* task, uint64_t delay_milliseconds) {
  DCHECK(task);
  // TODO(halliwell): FROM_HERE is misleading, we should consider a macro for
  // vendor backends to send the callsite info.
  return runner_->PostDelayedTask(FROM_HERE,
                                  base::BindOnce(&Task::Run, base::Owned(task)),
                                  base::Milliseconds(delay_milliseconds));
}

}  // namespace chromecast
