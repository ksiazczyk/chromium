// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page load metrics initialization header
// summary: Declares InitializePageLoadMetricsForWebContents, the entry point for setting up page load metrics tracking for a WebView WebContents.
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_INITIALIZE_H_
#define ANDROID_WEBVIEW_BROWSER_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_INITIALIZE_H_

namespace content {
class WebContents;
}

namespace android_webview {

void InitializePageLoadMetricsForWebContents(
    content::WebContents* web_contents);

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_INITIALIZE_H_
