// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Bluetooth socket implementation
// summary: Provides default constructor and destructor definitions for the MockBluetoothSocket test double.
// ---

#include "device/bluetooth/test/mock_bluetooth_socket.h"

namespace device {

MockBluetoothSocket::MockBluetoothSocket() = default;
MockBluetoothSocket::~MockBluetoothSocket() = default;

}  // namespace device
