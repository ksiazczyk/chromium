// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FakeDiscoveredDevicesProvider
// summary: Declares a fake DiscoveredDevicesProvider that keeps a settable list of discovered devices for tests.
// ---

#ifndef CHROMEOS_ASH_SERVICES_BLUETOOTH_CONFIG_FAKE_DISCOVERED_DEVICES_PROVIDER_H_
#define CHROMEOS_ASH_SERVICES_BLUETOOTH_CONFIG_FAKE_DISCOVERED_DEVICES_PROVIDER_H_

#include "chromeos/ash/services/bluetooth_config/discovered_devices_provider.h"

namespace ash::bluetooth_config {

class FakeDiscoveredDevicesProvider : public DiscoveredDevicesProvider {
 public:
  FakeDiscoveredDevicesProvider();
  ~FakeDiscoveredDevicesProvider() override;

  void SetDiscoveredDevices(
      std::vector<mojom::BluetoothDevicePropertiesPtr> unpaired_devices);

 private:
  // DiscoveredDevicesProvider:
  std::vector<mojom::BluetoothDevicePropertiesPtr> GetDiscoveredDevices()
      const override;

  std::vector<mojom::BluetoothDevicePropertiesPtr> discovered_devices_;
};

}  // namespace ash::bluetooth_config

#endif  // CHROMEOS_ASH_SERVICES_BLUETOOTH_CONFIG_FAKE_DISCOVERED_DEVICES_PROVIDER_H_
