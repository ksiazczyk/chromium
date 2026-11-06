// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: HostPortPair string parsing fuzzer
// summary: Fuzzer harness that feeds arbitrary input to HostPortPair::FromString to check parsing robustness.
// ---

#include "net/base/host_port_pair.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  const std::string test_data(reinterpret_cast<const char*>(data), size);
  net::HostPortPair::FromString(test_data);
  return 0;
}
