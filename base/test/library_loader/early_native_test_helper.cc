// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Early native test helper for library loader
// summary: JNI test helper in base that verifies the library loader initialized the native command line and that early native code can run before content initialization.
// ---

#include "base/command_line.h"
#include "base/process/current_process.h"
#include "base/trace_event/trace_log.h"
#include "base/tracing_buildflags.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "base/base_javatests_jni/EarlyNativeTest_jni.h"

namespace base {

// Ensures that the LibraryLoader swapped over to the native command line.
static bool JNI_EarlyNativeTest_IsCommandLineInitialized(JNIEnv* env) {
  return CommandLine::InitializedForCurrentProcess();
}

// Ensures that native initialization took place, allowing early native code to
// use things like Tracing that don't depend on content initialization.
static bool JNI_EarlyNativeTest_IsProcessNameEmpty(JNIEnv* env) {
  return CurrentProcess::GetInstance().IsProcessNameEmpty();
}

}  // namespace base

DEFINE_JNI(EarlyNativeTest)
