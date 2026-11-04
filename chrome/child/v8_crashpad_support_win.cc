// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: V8 crashpad support setup on Windows
// summary: Registers a V8 unhandled exception callback that routes exceptions to Crashpad on 64-bit Windows builds.
// ---

#include "chrome/child/v8_crashpad_support_win.h"

#include "build/build_config.h"
#include "components/crash/core/app/crash_export_thunks.h"
#include "gin/public/debug.h"

namespace v8_crashpad_support {

void SetUp() {
#if defined(ARCH_CPU_X86_64)
  gin::Debug::SetUnhandledExceptionCallback(&CrashForException_ExportThunk);
#endif
}

}  // namespace v8_crashpad_support
