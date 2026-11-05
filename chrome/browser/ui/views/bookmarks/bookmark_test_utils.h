// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bookmark test utilities header
// summary: Declares the SignInAndEnableAccountBookmarkNodes helper used by bookmark tests to set up a signed-in profile with account bookmark nodes.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_BOOKMARKS_BOOKMARK_TEST_UTILS_H_
#define CHROME_BROWSER_UI_VIEWS_BOOKMARKS_BOOKMARK_TEST_UTILS_H_

#include "chrome/browser/signin/identity_manager_factory.h"

class Profile;

void SignInAndEnableAccountBookmarkNodes(Profile* profile);

#endif  // CHROME_BROWSER_UI_VIEWS_BOOKMARKS_BOOKMARK_TEST_UTILS_H_
