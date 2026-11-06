// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UrlAndTitle struct header
// summary: Defines a simple struct pairing a GURL with a title string for bookmark URL and title data.
// ---

#ifndef COMPONENTS_BOOKMARKS_BROWSER_URL_AND_TITLE_H_
#define COMPONENTS_BOOKMARKS_BROWSER_URL_AND_TITLE_H_

#include <string>

#include "url/gurl.h"

namespace bookmarks {

struct UrlAndTitle {
  GURL url;
  std::u16string title;
};

}  // namespace bookmarks

#endif  // COMPONENTS_BOOKMARKS_BROWSER_URL_AND_TITLE_H_
