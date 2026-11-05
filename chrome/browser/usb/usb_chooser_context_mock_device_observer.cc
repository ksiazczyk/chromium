// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock USB device observer implementation
// summary: Implements the constructor and destructor of the mock UsbChooserContext device observer used in tests.
// ---

#include "chrome/browser/usb/usb_chooser_context_mock_device_observer.h"

#include "services/device/public/mojom/usb_device.mojom.h"

MockDeviceObserver::MockDeviceObserver() = default;

MockDeviceObserver::~MockDeviceObserver() = default;
