// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake adapter state controller declaration
// summary: Declares FakeAdapterStateController, a fake AdapterStateController used to simulate adapter states in tests.
// ---

#ifndef CHROMEOS_ASH_SERVICES_BLUETOOTH_CONFIG_FAKE_ADAPTER_STATE_CONTROLLER_H_
#define CHROMEOS_ASH_SERVICES_BLUETOOTH_CONFIG_FAKE_ADAPTER_STATE_CONTROLLER_H_

#include "chromeos/ash/services/bluetooth_config/adapter_state_controller.h"
#include "chromeos/ash/services/bluetooth_config/public/mojom/cros_bluetooth_config.mojom.h"

namespace ash::bluetooth_config {

// Fake AdapterStateController implementation.
class FakeAdapterStateController : public AdapterStateController {
 public:
  FakeAdapterStateController();
  ~FakeAdapterStateController() override;

  // AdapterStateController:
  mojom::BluetoothSystemState GetAdapterState() const override;

  void SetSystemState(mojom::BluetoothSystemState system_state);

 private:
  // AdapterStateController:
  void SetBluetoothEnabledState(bool enabled) override;

  mojom::BluetoothSystemState system_state_ =
      mojom::BluetoothSystemState::kEnabled;
};

}  // namespace ash::bluetooth_config

#endif  // CHROMEOS_ASH_SERVICES_BLUETOOTH_CONFIG_FAKE_ADAPTER_STATE_CONTROLLER_H_
