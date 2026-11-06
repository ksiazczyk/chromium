// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ArticleEntry implementation
// summary: Implements ArticleEntry default constructors and the IsEntryValid helper that checks for a non-empty entry ID and valid page URLs.
// ---

#include "components/dom_distiller/core/article_entry.h"


namespace dom_distiller {

ArticleEntry::ArticleEntry() = default;
ArticleEntry::ArticleEntry(const ArticleEntry&) = default;
ArticleEntry::~ArticleEntry() = default;

bool IsEntryValid(const ArticleEntry& entry) {
  if (entry.entry_id.empty())
    return false;
  for (const GURL& page : entry.pages) {
    if (!page.is_valid())
      return false;
  }
  return true;
}

}  // namespace dom_distiller
