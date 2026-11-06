// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scheduling priority to-string conversion
// summary: Implements SchedulingPriorityToString, mapping GPU scheduling priority enum values to their string names.
// ---

#include "gpu/command_buffer/common/scheduling_priority.h"

#include "base/notreached.h"

namespace gpu {

const char* SchedulingPriorityToString(SchedulingPriority priority) {
  switch (priority) {
    case SchedulingPriority::kHigh:
      return "High";
    case SchedulingPriority::kNormal:
      return "Normal";
    case SchedulingPriority::kLow:
      return "Low";
  }
  NOTREACHED();
}

}  // namespace gpu
