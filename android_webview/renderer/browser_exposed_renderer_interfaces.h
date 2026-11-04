// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for browser-exposed renderer interfaces
// summary: Declares ExposeRendererInterfacesToBrowser, which registers WebView renderer Mojo interfaces with the browser via a binder map.
// ---

#ifndef ANDROID_WEBVIEW_RENDERER_BROWSER_EXPOSED_RENDERER_INTERFACES_H_
#define ANDROID_WEBVIEW_RENDERER_BROWSER_EXPOSED_RENDERER_INTERFACES_H_

namespace mojo {
class BinderMap;
}  // namespace mojo

namespace android_webview {

class AwContentRendererClient;

void ExposeRendererInterfacesToBrowser(AwContentRendererClient* client,
                                       mojo::BinderMap* binders);

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_RENDERER_BROWSER_EXPOSED_RENDERER_INTERFACES_H_
