// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI_OnLoad initialization for the native test library
// summary: Initializes the VM when the native test shared library is loaded and installs the crash signal handlers for the test runner.
// ---

#include "base/android/base_jni_init.h"
#include "base/android/jni_android.h"
#include "base/android/library_loader/library_loader_hooks.h"
#include "base/functional/bind.h"
#include "testing/android/native_test/native_test_launcher.h"

namespace {

bool NativeInit() {
  if (!base::android::OnJNIOnLoadInit())
    return false;
  testing::android::InstallHandlers();
  return true;
}

}  // namespace


// This is called by the VM when the shared library is first loaded.
JNI_EXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
  base::android::InitVM(vm);
  if (!NativeInit()) {
    return -1;
  }
  return JNI_VERSION_1_4;
}
