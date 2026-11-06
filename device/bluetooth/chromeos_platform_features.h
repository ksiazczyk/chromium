// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS Bluetooth feature flag declarations
// summary: Header declaring ChromeOS Bluetooth feature flags, including Floss telephony and collection of btsnoop logs from the Bluetooth internals page.
// ---

#ifndef DEVICE_BLUETOOTH_CHROMEOS_PLATFORM_FEATURES_H_
#define DEVICE_BLUETOOTH_CHROMEOS_PLATFORM_FEATURES_H_

#include "base/feature_list.h"
#include "device/bluetooth/bluetooth_export.h"

namespace chromeos::bluetooth::features {

// Enables/disables the bluetooth telephony feature for floss
DEVICE_BLUETOOTH_EXPORT BASE_DECLARE_FEATURE(kBluetoothFlossTelephony);

// Enables/disables the option to collect btsnoop log from
// chrome://bluetooth-internals
DEVICE_BLUETOOTH_EXPORT BASE_DECLARE_FEATURE(kBluetoothBtsnoopInternals);

}  // namespace chromeos::bluetooth::features

#endif  // DEVICE_BLUETOOTH_CHROMEOS_PLATFORM_FEATURES_H_
