// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock USB service implementation
// summary: Implements MockUsbService methods that add and remove fake USB devices and notify listeners.
// ---

#include "services/device/usb/mock_usb_service.h"

#include <string>
#include <vector>

#include "services/device/usb/usb_device.h"

namespace device {

MockUsbService::MockUsbService() = default;
MockUsbService::~MockUsbService() = default;

void MockUsbService::AddDevice(scoped_refptr<UsbDevice> device) {
  devices()[device->guid()] = device;
  NotifyDeviceAdded(device);
}

void MockUsbService::RemoveDevice(scoped_refptr<UsbDevice> device) {
  devices().erase(device->guid());
  UsbService::NotifyDeviceRemoved(device);
}

}  // namespace device
