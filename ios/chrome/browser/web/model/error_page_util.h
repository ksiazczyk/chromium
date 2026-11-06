// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Error page utility header
// summary: Declares GetErrorPage, a helper that returns HTML for the error page shown in a WebState when a page load fails.
// ---

#ifndef IOS_CHROME_BROWSER_WEB_MODEL_ERROR_PAGE_UTIL_H_
#define IOS_CHROME_BROWSER_WEB_MODEL_ERROR_PAGE_UTIL_H_

class GURL;
@class NSError;
@class NSString;

// Returns error page HTML to display in WebState if the page load has failed.
NSString* GetErrorPage(const GURL& url,
                       NSError* error,
                       bool is_post,
                       bool is_off_the_record);

#endif  // IOS_CHROME_BROWSER_WEB_MODEL_ERROR_PAGE_UTIL_H_
