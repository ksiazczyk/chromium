// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Inclusion policy implementation for Windows tracing
// summary: Implements event inclusion rules that decide which thread IDs, file and disk I/O events, and call stacks are recorded based on the thread's process category.
// ---

#include "components/tracing/common/inclusion_policy_win.h"

#include "components/tracing/common/active_processes_win.h"

namespace tracing {

bool InclusionPolicy::ShouldIncludeThreadId(uint32_t thread_id) const {
  return active_processes_->GetThreadCategory(thread_id) !=
         ActiveProcesses::Category::kOther;
}

bool InclusionPolicy::ShouldRecordFileIoEvents(uint32_t thread_id) const {
  return active_processes_->GetThreadCategory(thread_id) ==
         ActiveProcesses::Category::kClient;
}

bool InclusionPolicy::ShouldRecordDiskIoEvents(uint32_t thread_id) const {
  // Include client and system process threads.
  return active_processes_->GetThreadCategory(thread_id) !=
         ActiveProcesses::Category::kOther;
}

bool InclusionPolicy::ShouldRecordCallStacks(uint32_t thread_id) const {
  return active_processes_->GetThreadCategory(thread_id) ==
         ActiveProcesses::Category::kClient;
}

}  // namespace tracing
