// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tether network constants
// summary: Defines constant strings for the tether network type and tether-specific properties such as battery percentage, carrier, and signal strength.
// ---

#include "chromeos/ash/components/network/tether_constants.h"

namespace ash {

const char kTypeTether[] = "wifi-tether";
const char kTetherBatteryPercentage[] = "Tether.BatteryPercentage";
const char kTetherCarrier[] = "Tether.Carrier";
const char kTetherHasConnectedToHost[] = "Tether.HasConnectedToHost";
const char kTetherSignalStrength[] = "Tether.SignalStrength";
const char kTetherDevicePath[] = "tether-device-path";
const char kTetherDeviceName[] = "tether-name";

}  // namespace ash
