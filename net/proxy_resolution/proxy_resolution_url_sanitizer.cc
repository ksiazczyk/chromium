// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Proxy resolution URL sanitizer implementation
// summary: Implements SanitizeUrlForProxyResolution, which strips credentials and fragments from URLs and also removes path and query for cryptographic schemes before they reach proxy resolvers.
// ---

#include "net/proxy_resolution/proxy_resolution_url_sanitizer.h"

#include "base/check.h"
#include "url/gurl.h"

namespace net {

GURL SanitizeUrlForProxyResolution(const GURL& url) {
  DCHECK(url.is_valid());

  GURL::Replacements replacements;
  replacements.ClearUsername();
  replacements.ClearPassword();
  replacements.ClearRef();

  if (url.SchemeIsCryptographic()) {
    replacements.ClearPath();
    replacements.ClearQuery();
  }

  return url.ReplaceComponents(replacements);
}

}  // namespace net
