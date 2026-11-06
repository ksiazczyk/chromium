// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock USB service
// summary: Declares a GMock subclass of UsbService with helpers to add and remove fake devices in tests.
// ---

#ifndef SERVICES_DEVICE_USB_MOCK_USB_SERVICE_H_
#define SERVICES_DEVICE_USB_MOCK_USB_SERVICE_H_

#include "services/device/usb/usb_service.h"

#include "testing/gmock/include/gmock/gmock.h"

namespace device {

class MockUsbService : public UsbService {
 public:
  MockUsbService();
  ~MockUsbService() override;

  void AddDevice(scoped_refptr<UsbDevice> device);
  void RemoveDevice(scoped_refptr<UsbDevice> device);
};

}  // namespace device

#endif  // SERVICES_DEVICE_USB_MOCK_USB_SERVICE_H_
