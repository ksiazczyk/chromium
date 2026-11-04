// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock power connected provider implementation
// summary: Implements MockPowerConnectedProvider with default constructor and destructor as a GMock test double for the power connected provider.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/mock_power_connected_provider.h
// ---

#include "ash/quick_pair/feature_status_tracker/mock_power_connected_provider.h"

namespace ash::quick_pair {

MockPowerConnectedProvider::MockPowerConnectedProvider() = default;

MockPowerConnectedProvider::~MockPowerConnectedProvider() = default;

}  // namespace ash::quick_pair
