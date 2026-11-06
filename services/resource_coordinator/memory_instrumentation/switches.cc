// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Memory instrumentation command-line switches
// summary: Defines the disable-chrome-tracing-computation switch that disables graph computation while writing the trace.
// ---

#include "services/resource_coordinator/memory_instrumentation/switches.h"

namespace memory_instrumentation {
namespace switches {

// Disable the tracing service graph compuation while writing the trace.
const char kDisableChromeTracingComputation[] =
    "disable-chrome-tracing-computation";

}  // namespace switches
}  // namespace memory_instrumentation
