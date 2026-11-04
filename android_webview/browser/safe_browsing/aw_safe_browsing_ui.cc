// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safe Browsing WebUI implementation
// summary: Implements the WebView Safe Browsing WebUI controller, wiring in the local state delegate and the browser process OSCrypt service.
// relations:
//   - implements /android_webview/browser/safe_browsing/aw_safe_browsing_ui.h
//   - depends_on /android_webview/browser/aw_browser_process.h
//   - depends_on /android_webview/browser/safe_browsing/aw_safe_browsing_local_state_delegate_impl.h
// ---

#include "android_webview/browser/safe_browsing/aw_safe_browsing_ui.h"

#include "android_webview/browser/aw_browser_process.h"
#include "android_webview/browser/safe_browsing/aw_safe_browsing_local_state_delegate_impl.h"

namespace safe_browsing {

AWSafeBrowsingUI::AWSafeBrowsingUI(content::WebUI* web_ui)
    : SafeBrowsingUI(
          web_ui,
          std::make_unique<safe_browsing::AwSafeBrowsingLocalStateDelegateImpl>(
              web_ui),
          android_webview::AwBrowserProcess::GetInstance()->GetOSCryptAsync()) {
}

AWSafeBrowsingUI::~AWSafeBrowsingUI() = default;

}  // namespace safe_browsing
