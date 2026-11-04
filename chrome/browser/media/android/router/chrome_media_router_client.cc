// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome media router client implementation
// summary: Defines InitChromeMediaRouterJavaClient, which initializes the Chrome-specific Java media router client through JNI bindings.
// ---

#include "chrome/browser/media/android/router/chrome_media_router_client.h"

#include "base/android/jni_android.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/android/chrome_jni_headers/ChromeMediaRouterClient_jni.h"

namespace media_router {

void InitChromeMediaRouterJavaClient() {
  Java_ChromeMediaRouterClient_initialize(base::android::AttachCurrentThread());
}

}  // namespace media_router

DEFINE_JNI(ChromeMediaRouterClient)
