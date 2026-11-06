// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub Bluetooth adapter factory
// summary: Stub CreateAdapter implementation that crashes with NOTREACHED when Bluetooth is not supported on the platform.
// ---

#include "device/bluetooth/bluetooth_adapter.h"

namespace device {

// Callers assume CreateAdapter() does not return null and is not called
// when Bluetooth is not supported, so crash right away if we get here.
// static
scoped_refptr<BluetoothAdapter> BluetoothAdapter::CreateAdapter() {
  NOTREACHED();
}

}  // namespace device
