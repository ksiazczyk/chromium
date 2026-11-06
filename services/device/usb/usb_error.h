// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: USB error conversion header
// summary: Declares ConvertPlatformUsbErrorToString for converting libusb error integers to descriptive strings.
// ---

#ifndef SERVICES_DEVICE_USB_USB_ERROR_H_
#define SERVICES_DEVICE_USB_USB_ERROR_H_

#include <string>

namespace device {

// A number of libusb functions which return a member of enum libusb_error
// return an int instead so for convenience this function takes an int.
std::string ConvertPlatformUsbErrorToString(int errcode);

}  // namespace device

#endif  // SERVICES_DEVICE_USB_USB_ERROR_H_
