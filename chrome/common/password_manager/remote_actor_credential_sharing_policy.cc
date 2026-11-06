// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote actor credential sharing origin policy implementation
// summary: Implements the allowlist check that permits remote actor credential sharing only for approved Gemini origins or a feature-flag-configured test host.
// ---

#include "chrome/common/password_manager/remote_actor_credential_sharing_policy.h"

#include <vector>

#include "base/no_destructor.h"
#include "chrome/common/chrome_features.h"
#include "url/gurl.h"
#include "url/origin.h"
#include "url/url_constants.h"

namespace password_manager {

bool IsRemoteActorCredentialSharingAllowedForOrigin(const url::Origin& origin) {
  std::string allowed_host =
      features::kRemoteActorCredentialSharingAllowedHostForTesting.Get();
  if (!allowed_host.empty()) {
    // Note: For the feature flag configured allowed host parameter, we only
    // verify the scheme and host, skipping the port check. This is necessary
    // because in browser tests, the EmbeddedTestServer runs on a dynamically
    // allocated random port.
    if (origin.scheme() == url::kHttpsScheme && origin.host() == allowed_host) {
      return true;
    }
  }

  static const base::NoDestructor<std::vector<url::Origin>> kAllowedOrigins([] {
    return std::vector<url::Origin>{
        url::Origin::Create(GURL("https://gemini.google.com")),
        url::Origin::Create(GURL("https://gemini.corp.google.com")),
        url::Origin::Create(GURL("https://gemini-preprod.corp.google.com")),
        url::Origin::Create(GURL("https://gemini-staging.corp.google.com")),
        url::Origin::Create(GURL("https://gemini-autopush.corp.google.com")),
    };
  }());

  for (const auto& allowed_origin : *kAllowedOrigins) {
    if (origin.IsSameOriginWith(allowed_origin)) {
      return true;
    }
  }
  return false;
}

}  // namespace password_manager
