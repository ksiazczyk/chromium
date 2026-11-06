// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for the ParseBleScan entry point
// summary: Declares the ParseBleScan function that returns an optional parsed ScanRecord from raw bytes.
// ---

#ifndef DEVICE_BLUETOOTH_BLUEZ_BLE_SCAN_PARSER_BLE_SCAN_PARSER_H_
#define DEVICE_BLUETOOTH_BLUEZ_BLE_SCAN_PARSER_BLE_SCAN_PARSER_H_

#include <stdint.h>

#include <optional>

#include "base/containers/span.h"
#include "device/bluetooth/bluez/ble_scan_parser/scan_record.h"

namespace bluez {

std::optional<ScanRecord> ParseBleScan(base::span<const uint8_t> bytes);

}

#endif  // DEVICE_BLUETOOTH_BLUEZ_BLE_SCAN_PARSER_BLE_SCAN_PARSER_H_
