// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake WinRT publisher status changed event args implementation
// summary: Implements fake status-changed event arguments for a Bluetooth LE advertisement publisher, returning a stored status and Bluetooth error code.
// ---

#include "device/bluetooth/test/fake_bluetooth_le_advertisement_publisher_status_changed_event_args_winrt.h"

namespace device {

namespace {

using ABI::Windows::Devices::Bluetooth::Advertisement::
    BluetoothLEAdvertisementPublisherStatus;
using ABI::Windows::Devices::Bluetooth::BluetoothError;

}  // namespace

FakeBluetoothLEAdvertisementPublisherStatusChangedEventArgsWinrt::
    FakeBluetoothLEAdvertisementPublisherStatusChangedEventArgsWinrt(
        BluetoothLEAdvertisementPublisherStatus status)
    : status_(status) {}

FakeBluetoothLEAdvertisementPublisherStatusChangedEventArgsWinrt::
    FakeBluetoothLEAdvertisementPublisherStatusChangedEventArgsWinrt(
        BluetoothLEAdvertisementPublisherStatus status,
        BluetoothError error)
    : status_(status), error_(error) {}

FakeBluetoothLEAdvertisementPublisherStatusChangedEventArgsWinrt::
    ~FakeBluetoothLEAdvertisementPublisherStatusChangedEventArgsWinrt() =
        default;

HRESULT
FakeBluetoothLEAdvertisementPublisherStatusChangedEventArgsWinrt::get_Status(
    BluetoothLEAdvertisementPublisherStatus* value) {
  *value = status_;
  return S_OK;
}

HRESULT
FakeBluetoothLEAdvertisementPublisherStatusChangedEventArgsWinrt::get_Error(
    BluetoothError* value) {
  *value = error_;
  return S_OK;
}

}  // namespace device
