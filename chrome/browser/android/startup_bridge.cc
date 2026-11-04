// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android startup bridge for loading the full browser
// summary: Implements a JNI bridge that lets Android startup code trigger loading of the full browser process once it is needed.
// ---

#include "chrome/browser/android/startup_bridge.h"

#include <jni.h>

#include "base/android/jni_android.h"
#include "chrome/browser/browser_process.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/android/chrome_jni_headers/NativeStartupBridge_jni.h"

namespace android_startup {

void LoadFullBrowser() {
  if (g_browser_process)
    return;
  JNIEnv* env = base::android::AttachCurrentThread();
  Java_NativeStartupBridge_loadFullBrowser(env);
}

}  // namespace android_startup

DEFINE_JNI(NativeStartupBridge)
