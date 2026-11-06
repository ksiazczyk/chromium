// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safe Browsing WebUI constants implementation
// summary: Implements the helper that recognizes Chrome's Safe Browsing WebUI match pages for malware, phishing, billing, and unwanted software threats.
// ---

#include "components/safe_browsing/core/common/web_ui_constants.h"

namespace safe_browsing {

bool IsSafeBrowsingWebUIUrl(const GURL& url) {
  return url == kChromeUISafeBrowsingMatchMalwareUrl ||
         url == kChromeUISafeBrowsingMatchPhishingUrl ||
         url == kChromeUISafeBrowsingMatchBillingUrl ||
         url == kChromeUISafeBrowsingMatchUnwantedUrl;
}

}  // namespace safe_browsing
