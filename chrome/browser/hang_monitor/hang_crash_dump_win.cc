// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows hung child process crash dump
// summary: Implements crash dumping for hung child processes on Windows by injecting a remote dump thread and waiting up to ten seconds for the dump to complete.
// ---

#include "chrome/browser/hang_monitor/hang_crash_dump.h"

#include <windows.h>

#include <ostream>

#include "base/check.h"
#include "components/crash/core/app/crash_export_thunks.h"

namespace {

// How long do we wait for the crash to be generated (in ms).
static const int kGenerateDumpTimeoutMS = 10000;

}  // namespace

void CrashDumpHungChildProcess(base::ProcessHandle handle) {
  HANDLE remote_thread = InjectDumpForHungInput_ExportThunk(handle);
  DPCHECK(remote_thread) << "Failed creating remote thread";
  if (remote_thread) {
    WaitForSingleObject(remote_thread, kGenerateDumpTimeoutMS);
    CloseHandle(remote_thread);
  }
}
