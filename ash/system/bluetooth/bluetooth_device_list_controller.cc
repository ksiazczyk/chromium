// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bluetooth device list controller factory
// summary: Implements the BluetoothDeviceListController factory, creating the real controller or a test-provided factory instance.
// relations:
//   - implements /ash/system/bluetooth/bluetooth_device_list_controller.h
//   - references /ash/system/bluetooth/bluetooth_device_list_controller_impl.h
// ---

#include "ash/system/bluetooth/bluetooth_device_list_controller.h"

#include "ash/system/bluetooth/bluetooth_device_list_controller_impl.h"

namespace ash {
namespace {
BluetoothDeviceListController::Factory* g_test_factory = nullptr;
}  // namespace

std::unique_ptr<BluetoothDeviceListController>
BluetoothDeviceListController::Factory::Create(
    BluetoothDetailedView* bluetooth_detailed_view) {
  if (g_test_factory)
    return g_test_factory->CreateForTesting();  // IN-TEST
  return std::make_unique<BluetoothDeviceListControllerImpl>(
      bluetooth_detailed_view);
}

void BluetoothDeviceListController::Factory::SetFactoryForTesting(
    Factory* test_factory) {
  g_test_factory = test_factory;
}

}  // namespace ash
