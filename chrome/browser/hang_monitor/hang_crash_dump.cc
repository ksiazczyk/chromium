// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default hung child crash dump stub
// summary: Default implementation of CrashDumpHungChildProcess that is left unimplemented on platforms other than Mac and Windows.
// ---

#include "chrome/browser/hang_monitor/hang_crash_dump.h"

#include "base/notimplemented.h"

void CrashDumpHungChildProcess(base::ProcessHandle handle) {
  NOTIMPLEMENTED();
}
