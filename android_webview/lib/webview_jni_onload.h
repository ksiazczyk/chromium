// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OnJNIOnLoadInit declaration
// summary: Declares the exported OnJNIOnLoadInit hook that WebView uses to initialize content during JNI library load.
// relations:
//   - depends_on /base/component_export.h
// ---

#ifndef ANDROID_WEBVIEW_LIB_WEBVIEW_JNI_ONLOAD_H_
#define ANDROID_WEBVIEW_LIB_WEBVIEW_JNI_ONLOAD_H_

#include "base/component_export.h"

namespace android_webview {

COMPONENT_EXPORT(ANDROID_WEBVIEW) bool OnJNIOnLoadInit();

}  // android_webview

#endif  // ANDROID_WEBVIEW_LIB_WEBVIEW_JNI_ONLOAD_H_
