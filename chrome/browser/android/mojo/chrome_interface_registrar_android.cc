// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome interface registrar for Android implementation
// summary: Registers Chrome's Java-side Mojo interfaces on Android by invoking the ChromeInterfaceRegistrar JNI method.
// ---

#include "chrome/browser/android/mojo/chrome_interface_registrar_android.h"

#include <jni.h>

#include "base/android/jni_android.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/android/chrome_jni_headers/ChromeInterfaceRegistrar_jni.h"

void RegisterChromeJavaMojoInterfaces() {
  Java_ChromeInterfaceRegistrar_registerMojoInterfaces(
      base::android::AttachCurrentThread());
}

DEFINE_JNI(ChromeInterfaceRegistrar)
