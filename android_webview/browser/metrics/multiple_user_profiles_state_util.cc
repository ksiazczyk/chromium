// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Multiple user profiles state utility implementation
// summary: Implements GetMultipleUserProfilesState by querying the Android side through JNI for use in WebView metrics.
// relations:
//   - depends_on /android_webview/browser/metrics/system_state_util.h
// ---

#include "android_webview/browser/metrics/system_state_util.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "android_webview/browser_jni_headers/SystemStateUtil_jni.h"

namespace android_webview {

MultipleUserProfilesState GetMultipleUserProfilesState() {
  static MultipleUserProfilesState multiple_user_profiles_state =
      static_cast<MultipleUserProfilesState>(
          Java_SystemStateUtil_getMultipleUserProfilesState(
              base::android::AttachCurrentThread()));
  return multiple_user_profiles_state;
}

}  // namespace android_webview

DEFINE_JNI(SystemStateUtil)
