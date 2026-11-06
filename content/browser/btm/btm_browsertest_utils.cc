// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BTM browser test client implementation
// summary: Implements a content browser test browser client that forwards cookie access and BTM deletion decisions to a wrapped TPC-blocking client.
// ---

#include "content/browser/btm/btm_browsertest_utils.h"

#include "net/cookies/cookie_setting_override.h"

namespace content {

bool ContentBrowserTestTpcBlockingBrowserClient::IsFullCookieAccessAllowed(
    BrowserContext* browser_context,
    WebContents* web_contents,
    const GURL& url,
    const blink::StorageKey& storage_key,
    net::CookieSettingOverrides overrides) {
  return impl_.IsFullCookieAccessAllowed(browser_context, web_contents, url,
                                         storage_key, overrides);
}

bool ContentBrowserTestTpcBlockingBrowserClient::
    AreThirdPartyCookiesGenerallyAllowed(BrowserContext* browser_context,
                                         WebContents* web_contents) {
  return impl_.AreThirdPartyCookiesGenerallyAllowed(browser_context,
                                                    web_contents);
}

bool ContentBrowserTestTpcBlockingBrowserClient::
    ShouldBtmDeleteInteractionRecords(uint64_t remove_mask) {
  return impl_.ShouldBtmDeleteInteractionRecords(remove_mask);
}

bool ContentBrowserTestTpcBlockingBrowserClient::
    IsPrivacySandboxReportingDestinationAttested(
        BrowserContext* browser_context,
        const url::Origin& destination_origin,
        PrivacySandboxInvokingAPI invoking_api) {
  return true;
}

}  // namespace content
