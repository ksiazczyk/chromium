// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebViewApkApplication JNI initialization
// summary: Implements JNI entry points that initialize ICU and resource bundles and start the WebViewApkProcess singleton when the WebView APK application starts.
// relations:
//   - depends_on /android_webview/common/aw_resource_bundle.h
//   - depends_on /android_webview/nonembedded/webview_apk_process.h
//   - depends_on /base/check.h
// ---


#include "android_webview/common/aw_resource_bundle.h"
#include "android_webview/nonembedded/webview_apk_process.h"
#include "base/check.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "android_webview/nonembedded/nonembedded_jni_headers/WebViewApkApplication_jni.h"

namespace android_webview {

static void JNI_WebViewApkApplication_InitializeGlobalsAndResources(
    JNIEnv* env) {
  InitIcuAndResourceBundleBrowserSide();
  WebViewApkProcess::Init();
}

}  // namespace android_webview

DEFINE_JNI(WebViewApkApplication)
