// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safe Browsing local state delegate implementation
// summary: Implements the WebView Safe Browsing WebUI local state delegate, whose GetLocalState currently returns null.
// relations:
//   - implements /android_webview/browser/safe_browsing/aw_safe_browsing_local_state_delegate_impl.h
// ---

#include "android_webview/browser/safe_browsing/aw_safe_browsing_local_state_delegate_impl.h"

namespace safe_browsing {
AwSafeBrowsingLocalStateDelegateImpl::AwSafeBrowsingLocalStateDelegateImpl(
    content::WebUI* web_ui) {}
PrefService* AwSafeBrowsingLocalStateDelegateImpl::GetLocalState() {
  return nullptr;
}

}  // namespace safe_browsing
