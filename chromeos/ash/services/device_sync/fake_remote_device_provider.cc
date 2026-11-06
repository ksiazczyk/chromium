// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake RemoteDeviceProvider implementation
// summary: Implements a fake RemoteDeviceProvider test double that returns a configurable synced device list and notifies observers.
// ---

#include "chromeos/ash/services/device_sync/fake_remote_device_provider.h"

namespace ash {

namespace device_sync {

FakeRemoteDeviceProvider::FakeRemoteDeviceProvider() = default;

FakeRemoteDeviceProvider::~FakeRemoteDeviceProvider() = default;

void FakeRemoteDeviceProvider::NotifyObserversDeviceListChanged() {
  RemoteDeviceProvider::NotifyObserversDeviceListChanged();
}

const multidevice::RemoteDeviceList&
FakeRemoteDeviceProvider::GetSyncedDevices() const {
  return synced_remote_devices_;
}

}  // namespace device_sync

}  // namespace ash
