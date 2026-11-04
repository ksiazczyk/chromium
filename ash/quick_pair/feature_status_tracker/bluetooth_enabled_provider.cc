// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BluetoothEnabledProvider implementation
// summary: Implements a provider that reports whether the Bluetooth adapter is powered and has hardware support, updating on adapter power, presence and offloading changes.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/bluetooth_enabled_provider.h
//   - depends_on /ash/quick_pair/feature_status_tracker/fast_pair_support_utils.h
// ---

#include "ash/quick_pair/feature_status_tracker/bluetooth_enabled_provider.h"

#include "ash/quick_pair/feature_status_tracker/fast_pair_support_utils.h"
#include "base/functional/bind.h"
#include "base/memory/scoped_refptr.h"
#include "device/bluetooth/bluetooth_adapter.h"
#include "device/bluetooth/bluetooth_adapter_factory.h"

namespace ash {
namespace quick_pair {

BluetoothEnabledProvider::BluetoothEnabledProvider() {
  device::BluetoothAdapterFactory::Get()->GetAdapter(
      base::BindOnce(&BluetoothEnabledProvider::OnAdapterReceived,
                     weak_factory_.GetWeakPtr()));
}

BluetoothEnabledProvider::~BluetoothEnabledProvider() = default;

void BluetoothEnabledProvider::AdapterPoweredChanged(
    device::BluetoothAdapter* adapter,
    bool powered) {
  Update();
}

void BluetoothEnabledProvider::AdapterPresentChanged(
    device::BluetoothAdapter* adapter,
    bool present) {
  Update();
}

void BluetoothEnabledProvider::OnAdapterReceived(
    scoped_refptr<device::BluetoothAdapter> adapter) {
  adapter_ = adapter;
  adapter_observation_.Observe(adapter_.get());

  Update();
}

void BluetoothEnabledProvider::
    LowEnergyScanSessionHardwareOffloadingStatusChanged(
        device::BluetoothAdapter::LowEnergyScanSessionHardwareOffloadingStatus
            status) {
  Update();
}

void BluetoothEnabledProvider::Update() {
  if (!HasHardwareSupport(adapter_)) {
    SetEnabledAndInvokeCallback(/*is_enabled=*/false);
    return;
  }

  SetEnabledAndInvokeCallback(adapter_->IsPowered());
}

}  // namespace quick_pair
}  // namespace ash
