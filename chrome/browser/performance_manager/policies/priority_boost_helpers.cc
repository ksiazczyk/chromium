// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows process priority boost helpers
// summary: Implements helpers that disable or query the Windows process priority boost for a process node.
// ---

#include "chrome/browser/performance_manager/policies/priority_boost_helpers.h"

#include <windows.h>

#include "components/performance_manager/public/graph/process_node.h"

namespace performance_manager::policies {

void SetDisableBoostIfValid(const ProcessNode* process_node,
                            bool disable_boost) {
  const base::Process& process = process_node->GetProcess();
  if (process.IsValid()) {
    // The second argument to this function *disables* boosting if true. See
    // https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-setprocesspriorityboost
    ::SetProcessPriorityBoost(process.Handle(), disable_boost);
  }
}

bool IsProcessPriorityBoostEnabled(const ProcessNode* process_node) {
  const base::Process& process = process_node->GetProcess();
  CHECK(process.IsValid());
  BOOL boost_disabled = FALSE;
  // The second argument to this function is true when boosting is *disabled*.
  // See
  // https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-getprocesspriorityboost
  CHECK(::GetProcessPriorityBoost(process_node->GetProcess().Handle(),
                                  &boost_disabled));
  return boost_disabled == false;
}

}  // namespace performance_manager::policies
