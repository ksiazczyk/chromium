// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HID preserving Bluetooth state service implementation
// summary: Provides GetHidPreservingBluetoothStateControllerService, which binds a Mojo receiver to the in-process controller instance.
// ---

#include "ash/system/bluetooth/hid_preserving_controller/hid_preserving_bluetooth_state_service.h"

#include "ash/system/bluetooth/hid_preserving_controller/in_process_instance.h"

namespace ash {

void GetHidPreservingBluetoothStateControllerService(
    mojo::PendingReceiver<mojom::HidPreservingBluetoothStateController>
        receiver) {
  bluetooth::BindToInProcessInstance(std::move(receiver));
}

}  // namespace ash
