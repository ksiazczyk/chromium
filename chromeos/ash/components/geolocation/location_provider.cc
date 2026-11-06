// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LocationProvider base class implementation
// summary: Implements the LocationProvider base class constructor and destructor that hold the injected LocationFetcher instance.
// ---

#include "chromeos/ash/components/geolocation/location_provider.h"

#include "chromeos/ash/components/geolocation/location_fetcher.h"

namespace ash {

LocationProvider::LocationProvider(
    std::unique_ptr<LocationFetcher> location_fetcher)
    : location_fetcher_(std::move(location_fetcher)) {}
LocationProvider::~LocationProvider() = default;

}  // namespace ash
