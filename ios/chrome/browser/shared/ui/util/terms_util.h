// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Terms of Service utility interface
// summary: Declares functions that return the localized Terms of Service file path and the unified Terms of Service URL.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_UTIL_TERMS_UTIL_H_
#define IOS_CHROME_BROWSER_SHARED_UI_UTIL_TERMS_UTIL_H_

#include <string>

class GURL;

// Returns file name for Terms of Service text localized for the application
// locale.
std::string GetTermsOfServicePath();

GURL GetUnifiedTermsOfServiceURL(bool embedded);

#endif  // IOS_CHROME_BROWSER_SHARED_UI_UTIL_TERMS_UTIL_H_
