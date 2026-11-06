// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: libusb error to string converter
// summary: Implements ConvertPlatformUsbErrorToString, turning libusb error codes into human-readable strings.
// ---

#include "services/device/usb/usb_error.h"

#include "third_party/libusb/src/libusb/libusb.h"

namespace device {

std::string ConvertPlatformUsbErrorToString(int errcode) {
  return libusb_strerror(static_cast<libusb_error>(errcode));
}

}  // namespace device
