// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android NTP URL handler header
// summary: Declares HandleAndroidNativePageURL, which rewrites old-style Android NTP and legacy bookmark URLs.
// ---

#ifndef CHROME_BROWSER_ANDROID_NTP_NEW_TAB_PAGE_URL_HANDLER_H_
#define CHROME_BROWSER_ANDROID_NTP_NEW_TAB_PAGE_URL_HANDLER_H_

class GURL;

namespace content {
class BrowserContext;
}

namespace chrome {
namespace android {

// Rewrites old-style Android NTP URLs and legacy bookmark URLs.
//  - chrome://newtab              -> chrome-native://newtab
//  - chrome-native://bookmarks/#  -> chrome-native://bookmarks/folder/
bool HandleAndroidNativePageURL(GURL* url,
                                content::BrowserContext* browser_context);

}  // namespace android
}  // namespace chrome

#endif  // CHROME_BROWSER_ANDROID_NTP_NEW_TAB_PAGE_URL_HANDLER_H_
