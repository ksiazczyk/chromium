// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: New Tab Page URL utility header
// summary: Declares helpers to check whether a URL or a web state's visible URL is a New Tab Page, including the case with no navigation history.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_MODEL_NEW_TAB_PAGE_UTIL_H_
#define IOS_CHROME_BROWSER_NTP_MODEL_NEW_TAB_PAGE_UTIL_H_

class GURL;

namespace web {
class WebState;
}

// Returns whether the `url` is currently a NewTabPage url.
bool IsURLNewTabPage(const GURL& url);

// Returns whether the `web_state` visible URL is currently a NewTabPage url.
bool IsVisibleURLNewTabPage(web::WebState* web_state);

// Returns whether the `web_state` visible URL is currently a NewTabPage url,
// and has no navigation history.
bool IsNTPWithoutHistory(web::WebState* web_state);

#endif  // IOS_CHROME_BROWSER_NTP_MODEL_NEW_TAB_PAGE_UTIL_H_
