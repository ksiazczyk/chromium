// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestNetworkQualityTracker implementation
// summary: Provides the constructor and destructor for a test NetworkQualityTracker that operates without a network service instance.
// ---

#include "services/network/test/test_network_quality_tracker.h"

namespace network {

TestNetworkQualityTracker::TestNetworkQualityTracker() = default;

TestNetworkQualityTracker::~TestNetworkQualityTracker() = default;

}  // namespace network
