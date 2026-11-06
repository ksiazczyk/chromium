// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FaviconUsageData declaration
// summary: Declares the FaviconUsageData struct, which correlates a favicon URL and its PNG data with the set of page URLs that use it, such as imported bookmarks.
// ---

#ifndef COMPONENTS_FAVICON_BASE_FAVICON_USAGE_DATA_H_
#define COMPONENTS_FAVICON_BASE_FAVICON_USAGE_DATA_H_

#include <set>
#include <vector>

#include "url/gurl.h"

namespace favicon_base {

// Used to correlate favicons to imported bookmarks.
struct FaviconUsageData {
  FaviconUsageData();
  FaviconUsageData(const FaviconUsageData& other);
  ~FaviconUsageData();

  // The URL of the favicon.
  GURL favicon_url;

  // The raw png-encoded data.
  std::vector<unsigned char> png_data;

  // The list of URLs using this favicon.
  std::set<GURL> urls;
};

typedef std::vector<FaviconUsageData> FaviconUsageDataList;

}  // namespace favicon_base

#endif  // COMPONENTS_FAVICON_BASE_FAVICON_USAGE_DATA_H_
