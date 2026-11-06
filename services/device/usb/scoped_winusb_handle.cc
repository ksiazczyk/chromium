// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WinUSB handle traits implementation
// summary: Implements the handle trait that frees WinUSB interface handles via WinUsb_Free.
// ---

#include "services/device/usb/scoped_winusb_handle.h"

#include <windows.h>

#include <winusb.h>

namespace device {

bool WinUsbHandleTraits::CloseHandle(Handle handle) {
  return WinUsb_Free(handle) == TRUE;
}

}  // namespace device
