// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BluetoothAdvertisement base implementation
// summary: Implements observer registration and data constructors for the base BluetoothAdvertisement class used by platform backends.
// ---

#include "device/bluetooth/bluetooth_advertisement.h"

#include "base/observer_list.h"

namespace device {

BluetoothAdvertisement::Data::Data(AdvertisementType type)
    : type_(type), include_tx_power_(false) {
}

BluetoothAdvertisement::Data::~Data() = default;

BluetoothAdvertisement::Data::Data()
    : type_(ADVERTISEMENT_TYPE_BROADCAST), include_tx_power_(false) {
}

void BluetoothAdvertisement::AddObserver(
    BluetoothAdvertisement::Observer* observer) {
  CHECK(observer);
  observers_.AddObserver(observer);
}

void BluetoothAdvertisement::RemoveObserver(
    BluetoothAdvertisement::Observer* observer) {
  CHECK(observer);
  observers_.RemoveObserver(observer);
}

BluetoothAdvertisement::BluetoothAdvertisement() = default;
BluetoothAdvertisement::~BluetoothAdvertisement() = default;

}  // namespace device
