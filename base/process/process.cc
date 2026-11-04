// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Process priority to string conversion
// summary: Converts Process priority enum values to human-readable strings and provides stream output for them.
// ---

#include "base/process/process.h"

#include <ostream>

#include "base/notreached.h"

namespace base {

const char* ProcessPriorityToString(Process::Priority process_priority) {
  switch (process_priority) {
    case Process::Priority::kBestEffort:
      return "Best effort";
    case Process::Priority::kUserVisible:
      return "User visible";
    case Process::Priority::kUserBlocking:
      return "User blocking";
  }
  NOTREACHED();
}

std::ostream& operator<<(std::ostream& os, Process::Priority process_priority) {
  return os << ProcessPriorityToString(process_priority);
}

}  // namespace base
