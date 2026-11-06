// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: USB descriptor parser fuzzer
// summary: libFuzzer harness that feeds arbitrary byte spans to UsbDeviceDescriptor::Parse to uncover bugs in USB descriptor parsing.
// ---

#include "services/device/usb/usb_descriptors.h"

#include <stddef.h>
#include <stdint.h>

#include "base/containers/span.h"
#include "testing/libfuzzer/libfuzzer_base_wrappers.h"

DEFINE_LLVM_FUZZER_TEST_ONE_INPUT_SPAN(base::span<const uint8_t> data) {
  device::UsbDeviceDescriptor desc;
  desc.Parse(data);
  return 0;
}
