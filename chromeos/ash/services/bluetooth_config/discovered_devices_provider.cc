// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DiscoveredDevicesProvider implementation
// summary: Implements the base DiscoveredDevicesProvider with observer registration and notification of discovered device list changes.
// ---

#include "chromeos/ash/services/bluetooth_config/discovered_devices_provider.h"

namespace ash::bluetooth_config {

DiscoveredDevicesProvider::DiscoveredDevicesProvider() = default;

DiscoveredDevicesProvider::~DiscoveredDevicesProvider() = default;

void DiscoveredDevicesProvider::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void DiscoveredDevicesProvider::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void DiscoveredDevicesProvider::NotifyDiscoveredDevicesListChanged() {
  for (auto& observer : observers_)
    observer.OnDiscoveredDevicesListChanged();
}

}  // namespace ash::bluetooth_config
