// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL test helper for content and fragment
// summary: Implements GetContentAndFragmentForUrl, returning a GURL's content and fragment concatenated for test comparisons.
// ---

#include "ios/net/url_test_util.h"

#include "base/strings/strcat.h"
#include "url/gurl.h"

namespace net {

std::string GetContentAndFragmentForUrl(const GURL& url) {
  return base::StrCat(
      {url.GetContentPiece(), url.has_ref() ? "#" : "", url.ref()});
}

}  // namespace net
