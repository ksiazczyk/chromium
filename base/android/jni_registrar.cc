// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI native method registration implementation
// summary: Implements RegisterNativeMethods, which registers a table of JNI native method bindings and logs an error if any registration fails.
// ---

#include "base/android/jni_registrar.h"

#include "base/android/jni_android.h"
#include "base/compiler_specific.h"
#include "base/logging.h"
#include "base/trace_event/trace_event.h"

namespace base {
namespace android {

bool RegisterNativeMethods(JNIEnv* env,
                           const RegistrationMethod* method,
                           size_t count) {
  TRACE_EVENT0("startup", "base_android::RegisterNativeMethods");
  const RegistrationMethod* end = UNSAFE_TODO(method + count);
  while (method != end) {
    if (!method->func(env)) {
      DLOG(ERROR) << method->name << " failed registration!";
      return false;
    }
    UNSAFE_TODO(method++);
  }
  return true;
}

}  // namespace android
}  // namespace base
