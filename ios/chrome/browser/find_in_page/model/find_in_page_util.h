// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Find in Page utility header
// summary: Declares IsFindNavigatorVisibleInTab, a helper that reports whether the find navigator is visible in a given tab.
// ---

#ifndef IOS_CHROME_BROWSER_FIND_IN_PAGE_MODEL_FIND_IN_PAGE_UTIL_H_
#define IOS_CHROME_BROWSER_FIND_IN_PAGE_MODEL_FIND_IN_PAGE_UTIL_H_

namespace web {
class WebState;
}

// Returns true if the find navigator is visible in the tab.
bool IsFindNavigatorVisibleInTab(web::WebState* tab);

#endif  // IOS_CHROME_BROWSER_FIND_IN_PAGE_MODEL_FIND_IN_PAGE_UTIL_H_
