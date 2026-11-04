// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: JNI entry point for WebView test support library
// summary: Defines the JNI_OnLoad entry point that initializes the Android JVM when the WebView test support shared library is first loaded.
// relations:
//   - depends_on /base/android/base_jni_init.h
//   - depends_on /base/android/jni_android.h
// ---

#include "base/android/base_jni_init.h"
#include "base/android/jni_android.h"

// This is called by the VM when the shared library is first loaded.
JNI_EXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
  base::android::InitVM(vm);
  if (!base::android::OnJNIOnLoadInit())
    return -1;
  return JNI_VERSION_1_4;
}
