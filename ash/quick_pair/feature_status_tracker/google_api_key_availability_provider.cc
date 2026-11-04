// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google API key availability provider implementation
// summary: Implements the provider that reports whether Google API keys are configured and used by the current Chrome build.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/google_api_key_availability_provider.h
// ---

#include "ash/quick_pair/feature_status_tracker/google_api_key_availability_provider.h"

#include "google_apis/google_api_keys.h"

namespace ash {
namespace quick_pair {

GoogleApiKeyAvailabilityProvider::GoogleApiKeyAvailabilityProvider() {
  SetEnabledAndInvokeCallback(google_apis::HasAPIKeyConfigured() &&
                              google_apis::IsGoogleChromeAPIKeyUsed());
}

GoogleApiKeyAvailabilityProvider::~GoogleApiKeyAvailabilityProvider() = default;

}  // namespace quick_pair
}  // namespace ash
