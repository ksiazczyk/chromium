// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bookmark parser base implementation
// summary: Implements constructors, destructors, and move operations for the BookmarkParser::ParsedBookmarks result type.
// ---

#include "components/user_data_importer/utility/bookmark_parser.h"

namespace user_data_importer {

BookmarkParser::ParsedBookmarks::ParsedBookmarks() = default;
BookmarkParser::ParsedBookmarks::~ParsedBookmarks() = default;
BookmarkParser::ParsedBookmarks::ParsedBookmarks(ParsedBookmarks&&) = default;
BookmarkParser::ParsedBookmarks& BookmarkParser::ParsedBookmarks::operator=(
    BookmarkParser::ParsedBookmarks&&) = default;

}  // namespace user_data_importer
