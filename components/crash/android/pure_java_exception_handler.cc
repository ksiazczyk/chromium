// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Pure Java exception handler JNI implementation
// summary: Implements the JNI bridge that uninstalls the Java-side pure Java exception handler used for crash reporting.
// ---

#include "components/crash/android/pure_java_exception_handler.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "components/crash/android/jni_headers/PureJavaExceptionHandler_jni.h"

void UninstallPureJavaExceptionHandler() {
  Java_PureJavaExceptionHandler_uninstallHandler(
      jni_zero::AttachCurrentThread());
}

DEFINE_JNI(PureJavaExceptionHandler)
