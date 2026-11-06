// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bookmark HTML parser for the utility process
// summary: Implements the mojom BookmarkHtmlParser Parse method by running ParseBookmarksUnsafe on raw HTML inside the sandboxed utility process.
// ---

#include "components/user_data_importer/content/content_bookmark_parser_in_utility_process.h"

#include "components/user_data_importer/content/content_bookmark_parser_utils.h"

namespace user_data_importer {

ContentBookmarkParserInUtilityProcess::ContentBookmarkParserInUtilityProcess(
    mojo::PendingReceiver<mojom::BookmarkHtmlParser> receiver)
    : receiver_(this, std::move(receiver)) {}

ContentBookmarkParserInUtilityProcess::
    ~ContentBookmarkParserInUtilityProcess() = default;

void ContentBookmarkParserInUtilityProcess::Parse(const std::string& raw_html,
                                                  ParseCallback callback) {
  std::move(callback).Run(ParseBookmarksUnsafe(std::move(raw_html)));
}

}  // namespace user_data_importer
