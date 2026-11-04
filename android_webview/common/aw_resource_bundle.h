// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebView resource bundle initialization API
// summary: Declares functions that initialize ICU and the resource bundle on the browser and renderer sides of Android WebView.
// ---

#ifndef ANDROID_WEBVIEW_COMMON_AW_RESOURCE_BUNDLE_H_
#define ANDROID_WEBVIEW_COMMON_AW_RESOURCE_BUNDLE_H_

namespace android_webview {

void InitIcuAndResourceBundleBrowserSide();

void InitResourceBundleRendererSide();

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_COMMON_AW_RESOURCE_BUNDLE_H_
