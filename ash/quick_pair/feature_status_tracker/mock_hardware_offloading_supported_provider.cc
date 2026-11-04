// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockHardwareOffloadingSupportedProvider implementation
// summary: Defines the default constructor and destructor for the MockHardwareOffloadingSupportedProvider test double.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/mock_hardware_offloading_supported_provider.h
// ---

#include "ash/quick_pair/feature_status_tracker/mock_hardware_offloading_supported_provider.h"

namespace ash::quick_pair {

MockHardwareOffloadingSupportedProvider::
    MockHardwareOffloadingSupportedProvider() = default;

MockHardwareOffloadingSupportedProvider::
    ~MockHardwareOffloadingSupportedProvider() = default;

}  // namespace ash::quick_pair
