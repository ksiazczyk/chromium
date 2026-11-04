// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Retry runner backoff helpers
// summary: Implements exponential backoff delay computation and delayed task posting used by the retry runner.
// ---

#include "chrome/browser/ash/app_mode/retry_runner.h"

#include "base/functional/callback.h"
#include "base/task/single_thread_task_runner.h"
#include "base/time/time.h"

namespace ash::internal {

base::TimeDelta DelayForAttempt(int attempt_count) {
  return base::Milliseconds(500 * (1 << (attempt_count - 1)));
}

void PostDelayedTask(base::OnceClosure task, base::TimeDelta delay) {
  base::SingleThreadTaskRunner::GetCurrentDefault()->PostDelayedTask(
      FROM_HERE, std::move(task), delay);
}

}  // namespace ash::internal
