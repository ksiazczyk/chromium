// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FakeReadResponse implementation
// summary: Implements the FakeReadResponse class that stores a GATT code and optional value for dispatching fake read responses.
// ---

#include "device/bluetooth/emulation/fake_read_response.h"

namespace bluetooth {

FakeReadResponse::FakeReadResponse(
    uint16_t gatt_code,
    const std::optional<std::vector<uint8_t>>& value)
    : gatt_code_(gatt_code), value_(value) {}

FakeReadResponse::~FakeReadResponse() = default;

}  // namespace bluetooth
