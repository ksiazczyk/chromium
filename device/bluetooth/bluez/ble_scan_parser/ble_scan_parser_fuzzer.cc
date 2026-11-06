// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: libFuzzer harness for BLE scan parsing
// summary: Feeds arbitrary input spans to ParseBleScan to verify the parser never crashes or misbehaves.
// ---

#include "device/bluetooth/bluez/ble_scan_parser/ble_scan_parser.h"

#include <stdint.h>

#include "base/containers/span.h"
#include "testing/libfuzzer/libfuzzer_base_wrappers.h"

DEFINE_LLVM_FUZZER_TEST_ONE_INPUT_SPAN(const base::span<const uint8_t> data) {
  // Check that the parser does not crash or do anything surprising.
  (void)bluez::ParseBleScan(data);
  return 0;
}
