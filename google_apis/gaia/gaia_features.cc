// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gaia feature flag definitions
// summary: Defines base::Feature flags for Gaia sign-in behavior, including a Finch killswitch for sync keys URL account indexing and transient handling of unexpected OAuth2 mint token responses.
// ---

#include "google_apis/gaia/gaia_features.h"

#include "base/feature_list.h"

namespace gaia::features {

// Intended as a Finch killswitch.
BASE_FEATURE(kSigninChromeSyncKeysUrlUsesAccountIndex,
             base::FEATURE_ENABLED_BY_DEFAULT);

// When enabled, IssueToken fetches return transient failure instead of a
// permanent one when receiving an HTTP 200 response with an unexpected body.
BASE_FEATURE(kOAuth2MintTokenUnexpectedResponseBodyIsTransient,
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace gaia::features
