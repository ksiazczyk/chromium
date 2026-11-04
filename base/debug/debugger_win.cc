// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows debugger implementation
// summary: Implements debugger detection with IsDebuggerPresent and breaking via __debugbreak, exiting directly when debug UI is suppressed.
// ---

#include "base/debug/debugger.h"

#include <windows.h>

#include <stdlib.h>

namespace base {
namespace debug {

bool BeingDebugged() {
  return ::IsDebuggerPresent() != 0;
}

void BreakDebuggerAsyncSafe() {
  if (IsDebugUISuppressed()) {
    _exit(1);
  }

  __debugbreak();
}

void VerifyDebugger() {}

}  // namespace debug
}  // namespace base
