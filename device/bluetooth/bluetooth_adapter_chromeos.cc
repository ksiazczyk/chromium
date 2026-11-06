// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS BluetoothAdapter creation
// summary: Selects the ChromeOS Bluetooth adapter implementation, creating a Floss or BlueZ adapter depending on the enabled feature flag.
// ---

#include "device/bluetooth/bluez/bluetooth_adapter_bluez.h"
#include "device/bluetooth/floss/bluetooth_adapter_floss.h"
#include "device/bluetooth/floss/floss_features.h"

namespace device {

scoped_refptr<device::BluetoothAdapter> BluetoothAdapter::CreateAdapter() {
  if (floss::features::IsFlossEnabled()) {
    return floss::BluetoothAdapterFloss::CreateAdapter();
  } else {
    return bluez::BluetoothAdapterBlueZ::CreateAdapter();
  }
}

}  // namespace device
