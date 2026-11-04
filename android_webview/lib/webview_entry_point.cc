// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebView native initialization entry point
// summary: Native initialization hook that dispatches JNI onload setup by library process type and aborts for unsupported child or browser process types.
// relations:
//   - depends_on /android_webview/lib/webview_jni_onload.h
//   - depends_on /base/android/base_jni_init.h
//   - depends_on /base/android/library_loader/library_loader_hooks.h
// ---

#include "android_webview/lib/webview_jni_onload.h"
#include "base/android/base_jni_init.h"
#include "base/android/library_loader/library_loader_hooks.h"
#include "base/logging.h"
#include "base/notreached.h"

bool NativeInitializationHook(
    base::android::LibraryProcessType library_process_type) {
  switch (library_process_type) {
    case base::android::PROCESS_WEBVIEW:
    case base::android::PROCESS_WEBVIEW_CHILD:
      return android_webview::OnJNIOnLoadInit();

    case base::android::PROCESS_WEBVIEW_NONEMBEDDED:
      return base::android::OnJNIOnLoadInit();

    case base::android::PROCESS_CHILD:
      LOG(FATAL) << "WebView cannot be started with a child process type.";
    case base::android::PROCESS_BROWSER:
      LOG(FATAL) << "WebView cannot be started with a browser process type.";

    default:
      NOTREACHED();
  }
}
