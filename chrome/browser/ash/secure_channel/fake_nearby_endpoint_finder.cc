// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake nearby endpoint finder implementation
// summary: Provides the trivial constructor and destructor for the fake endpoint finder used in tests.
// ---

#include "chrome/browser/ash/secure_channel/fake_nearby_endpoint_finder.h"

namespace ash {
namespace secure_channel {

FakeNearbyEndpointFinder::FakeNearbyEndpointFinder() = default;

FakeNearbyEndpointFinder::~FakeNearbyEndpointFinder() = default;

}  // namespace secure_channel
}  // namespace ash
