// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock pairing delegate implementation
// summary: Provides default constructor and destructor definitions for the MockPairingDelegate test double.
// ---

#include "device/bluetooth/test/mock_pairing_delegate.h"

namespace device {

MockPairingDelegate::MockPairingDelegate() = default;

MockPairingDelegate::~MockPairingDelegate() = default;

}  // namespace device
