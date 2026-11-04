// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebView user agent metadata conversion header
// summary: Declares the functions that convert user agent metadata between Java objects and Blink's UserAgentMetadata structure.
// relations:
//   - depends_on /base/android/jni_weak_ref.h
//   - depends_on /base/android/scoped_java_ref.h
//   - depends_on /third_party/blink/public/common/user_agent/user_agent_metadata.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_AW_USER_AGENT_METADATA_H_
#define ANDROID_WEBVIEW_BROWSER_AW_USER_AGENT_METADATA_H_

#include "base/android/jni_weak_ref.h"
#include "base/android/scoped_java_ref.h"
#include "third_party/blink/public/common/user_agent/user_agent_metadata.h"

namespace android_webview {

blink::UserAgentMetadata FromJavaAwUserAgentMetadata(
    JNIEnv* env,
    const base::android::JavaRef<jobject>& java_ua_metadata);

base::android::ScopedJavaLocalRef<jobject> ToJavaAwUserAgentMetadata(
    JNIEnv* env,
    const blink::UserAgentMetadata& ua_meta_data);

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_AW_USER_AGENT_METADATA_H_
