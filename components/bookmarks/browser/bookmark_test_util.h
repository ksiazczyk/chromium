// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for bookmark node test printer helpers
// summary: Declares gMock PrintTo helpers used to print bookmark nodes in test output.
// ---

#ifndef COMPONENTS_BOOKMARKS_BROWSER_BOOKMARK_TEST_UTIL_H_
#define COMPONENTS_BOOKMARKS_BROWSER_BOOKMARK_TEST_UTIL_H_

#include <iosfwd>

namespace bookmarks {

class BookmarkNode;

// gMock printer helpers.
void PrintTo(const BookmarkNode& node, std::ostream* os);
void PrintTo(const BookmarkNode* node, std::ostream* os);

}  // namespace bookmarks

#endif  // COMPONENTS_BOOKMARKS_BROWSER_BOOKMARK_TEST_UTIL_H_
