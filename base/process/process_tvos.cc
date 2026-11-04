// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: tvOS process priority stubs
// summary: Supplies tvOS-specific GetPriority and SetPriority implementations that return a fixed user-blocking priority and report that setting priority fails.
// ---

#include "base/process/process.h"
#include "base/time/time.h"

namespace base {

Process::Priority Process::GetPriority() const {
  return Priority::kUserBlocking;
}

bool Process::SetPriority(Priority priority) {
  return false;
}

}  // namespace base
