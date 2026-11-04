// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android startup completion JNI bridge
// summary: Android JNI glue that signals browser startup completion from Java via AfterStartupTaskUtils.
// ---

#include "chrome/browser/after_startup_task_utils.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/browser/util/jni_headers/AfterStartupTaskUtils_jni.h"

using jni_zero::JavaRef;

namespace android {

class AfterStartupTaskUtilsJNI {
 public:
  static void SetBrowserStartupIsComplete() {
    AfterStartupTaskUtils::SetBrowserStartupIsComplete(
        StartupIsCompleteReason::kAndroidStartup);
  }
};

}  // namespace android

static void JNI_AfterStartupTaskUtils_SetStartupComplete(JNIEnv* env) {
  android::AfterStartupTaskUtilsJNI::SetBrowserStartupIsComplete();
}

DEFINE_JNI(AfterStartupTaskUtils)
