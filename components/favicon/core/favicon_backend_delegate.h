// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FaviconBackendDelegate interface
// summary: Declares the abstract delegate interface supplying cached recent redirects and the most recently visited URL for an origin to FaviconBackend.
// ---

#ifndef COMPONENTS_FAVICON_CORE_FAVICON_BACKEND_DELEGATE_H_
#define COMPONENTS_FAVICON_CORE_FAVICON_BACKEND_DELEGATE_H_

#include <optional>
#include <vector>

class GURL;

namespace url {
class Origin;
}

namespace favicon {

class FaviconBackendDelegate {
 public:
  FaviconBackendDelegate() = default;

  // Returns the redirects for `page_url`. This should always return a
  // vector with at least one element (`page_url`).
  virtual std::vector<GURL> GetCachedRecentRedirectsForPage(
      const GURL& page_url) = 0;

  // Returns the URL of the most recently visited webpage of the given origin.
  virtual std::optional<GURL> GetMostRecentlyVisitedURLForOrigin(
      const url::Origin& origin) = 0;

 protected:
  virtual ~FaviconBackendDelegate() = default;
};

}  // namespace favicon

#endif  // COMPONENTS_FAVICON_CORE_FAVICON_BACKEND_DELEGATE_H_
