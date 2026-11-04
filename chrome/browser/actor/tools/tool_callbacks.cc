// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tool callback helper implementations
// summary: Implements helpers that post tool response and finished callbacks on the current sequence, optionally after a delay.
// ---

#include "chrome/browser/actor/tools/tool_callbacks.h"

#include <utility>

#include "base/functional/callback.h"
#include "base/task/sequenced_task_runner.h"
#include "chrome/common/actor.mojom.h"

namespace actor {

void PostResponseTask(ToolCallback task,
                      mojom::ActionResultPtr result,
                      base::TimeDelta delay) {
  base::SequencedTaskRunner::GetCurrentDefault()->PostDelayedTask(
      FROM_HERE, base::BindOnce(std::move(task), std::move(result)), delay);
}

void PostFinishedTask(base::OnceClosure task, base::TimeDelta delay) {
  base::SequencedTaskRunner::GetCurrentDefault()->PostDelayedTask(
      FROM_HERE, std::move(task), delay);
}

}  // namespace actor
