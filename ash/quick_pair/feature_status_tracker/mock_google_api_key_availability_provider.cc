// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockGoogleApiKeyAvailabilityProvider implementation
// summary: Defines the default constructor and destructor for the MockGoogleApiKeyAvailabilityProvider test double.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/mock_google_api_key_availability_provider.h
// ---

#include "ash/quick_pair/feature_status_tracker/mock_google_api_key_availability_provider.h"

namespace ash {
namespace quick_pair {

MockGoogleApiKeyAvailabilityProvider::MockGoogleApiKeyAvailabilityProvider() =
    default;

MockGoogleApiKeyAvailabilityProvider::~MockGoogleApiKeyAvailabilityProvider() =
    default;

}  // namespace quick_pair
}  // namespace ash
