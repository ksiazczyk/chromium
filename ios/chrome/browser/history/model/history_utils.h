// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: History URL filtering header
// summary: Declares ios::CanAddURLToHistory, which decides whether a given URL is eligible to be added to browser history.
// ---

#ifndef IOS_CHROME_BROWSER_HISTORY_MODEL_HISTORY_UTILS_H_
#define IOS_CHROME_BROWSER_HISTORY_MODEL_HISTORY_UTILS_H_

class GURL;

namespace ios {

// Returns true if this looks like the type of URL that should be added to the
// history. This filters out URLs such a JavaScript.
bool CanAddURLToHistory(const GURL& url);

}  // namespace ios

#endif  // IOS_CHROME_BROWSER_HISTORY_MODEL_HISTORY_UTILS_H_
