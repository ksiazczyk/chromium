// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FakeImplTaskRunnerProvider
// summary: Declares a fake TaskRunnerProvider that marks the current thread as the impl thread for single-threaded compositor tests.
// ---

#ifndef CC_TEST_FAKE_IMPL_TASK_RUNNER_PROVIDER_H_
#define CC_TEST_FAKE_IMPL_TASK_RUNNER_PROVIDER_H_

#include "base/task/single_thread_task_runner.h"
#include "cc/trees/single_thread_proxy.h"
#include "cc/trees/task_runner_provider.h"

namespace cc {

class FakeImplTaskRunnerProvider : public TaskRunnerProvider {
 public:
  FakeImplTaskRunnerProvider()
      : TaskRunnerProvider(base::SingleThreadTaskRunner::GetCurrentDefault(),
                           nullptr),
        set_impl_thread_(this) {}

  explicit FakeImplTaskRunnerProvider(
      scoped_refptr<base::SingleThreadTaskRunner> impl_task_runner)
      : TaskRunnerProvider(base::SingleThreadTaskRunner::GetCurrentDefault(),
                           impl_task_runner),
        set_impl_thread_(this) {}

 private:
  DebugScopedSetImplThread set_impl_thread_;
};

}  // namespace cc
#endif  // CC_TEST_FAKE_IMPL_TASK_RUNNER_PROVIDER_H_
