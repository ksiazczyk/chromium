// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Breakpad reporting initialization
// summary: Implements entry points that initialize Breakpad crash reporting and out-of-process crash clients on Windows.
// ---

#include "remoting/base/crash/crash_reporting_breakpad.h"

#if BUILDFLAG(IS_WIN)
#include "remoting/base/crash/breakpad_win.h"
#endif  // BUILDFLAG(IS_WIN)

namespace remoting {

// Not implemented for Mac, see https://crbug.com/714714
void InitializeBreakpadReporting() {
  // Touch the object to make sure it is initialized.
#if BUILDFLAG(IS_WIN)
  BreakpadWin::GetInstance().Initialize();
#endif  // BUILDFLAG(IS_WIN)
}

#if BUILDFLAG(IS_WIN)
void InitializeOopCrashClient(const std::string& server_pipe_handle) {
  // Touch the object to make sure it is initialized.
  BreakpadWin::GetInstance().Initialize(server_pipe_handle);
}
#endif  // BUILDFLAG(IS_WIN)

}  // namespace remoting
