// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: process_handle_win.cc
// summary: Windows implementation of GetCurrentProcId that returns the current process ID via GetCurrentProcessId.
// ---

#include "partition_alloc/partition_alloc_base/process/process_handle.h"

#include <windows.h>

namespace partition_alloc::internal::base {

ProcessId GetCurrentProcId() {
  return ::GetCurrentProcessId();
}

}  // namespace partition_alloc::internal::base
