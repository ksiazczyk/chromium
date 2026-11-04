// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock battery saver active provider implementation
// summary: Implements the constructor and destructor of the mock battery saver active provider used in tests.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/mock_battery_saver_active_provider.h
// ---

#include "ash/quick_pair/feature_status_tracker/mock_battery_saver_active_provider.h"

namespace ash::quick_pair {

MockBatterySaverActiveProvider::MockBatterySaverActiveProvider() = default;

MockBatterySaverActiveProvider::~MockBatterySaverActiveProvider() = default;

}  // namespace ash::quick_pair
