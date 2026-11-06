// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: V8 Crashpad support for Windows
// summary: Sets the V8 unhandled exception callback to the Crashpad export thunk on 64-bit Windows so V8 crashes are reported to Crashpad.
// ---

#include "content/shell/common/v8_crashpad_support_win.h"

#include <windows.h>

#include "components/crash/core/app/crash_export_thunks.h"
#include "gin/public/debug.h"

namespace v8_crashpad_support {

void SetUp() {
#ifdef _WIN64
  gin::Debug::SetUnhandledExceptionCallback(&CrashForException_ExportThunk);
#endif
}

}  // namespace v8_crashpad_support
