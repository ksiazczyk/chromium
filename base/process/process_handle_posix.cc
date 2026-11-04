// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: POSIX process handle implementation
// summary: Provides POSIX implementations of current process ID, handle, and proc ID helpers using getpid.
// ---

#include "base/process/process_handle.h"

#include <unistd.h>

namespace base {

ProcessId GetCurrentProcId() {
  return getpid();
}

ProcessHandle GetCurrentProcessHandle() {
  return GetCurrentProcId();
}

ProcessId GetProcId(ProcessHandle process) {
  return process;
}

}  // namespace base
