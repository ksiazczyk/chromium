// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Bluetooth Delegate implementation
// summary: Implements the constructor and destructor of the MockBluetoothDelegate gmock used in Bluetooth browser tests.
// ---

#include "content/browser/bluetooth/test/mock_bluetooth_delegate.h"

namespace content {

MockBluetoothDelegate::MockBluetoothDelegate() = default;
MockBluetoothDelegate::~MockBluetoothDelegate() = default;

}  // namespace content
