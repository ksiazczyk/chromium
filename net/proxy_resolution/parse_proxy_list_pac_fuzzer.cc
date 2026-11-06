// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Proxy list PAC string fuzzer
// summary: LibFuzzer harness that parses arbitrary input as a PAC proxy list string via ProxyList::SetFromPacString, limiting input size to avoid slow IDN canonicalization.
// ---

#include <stddef.h>
#include <stdint.h>

#include "base/compiler_specific.h"
#include "net/proxy_resolution/proxy_list.h"

// Entry point for LibFuzzer.
extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  // For large inputs, doing IDN canonicalization can be so slow it hits the
  // timeout. Limit the input size to avoid this.
  if (size > 128 * 1024) {
    return 0;
  }

  net::ProxyList list;
  // SAFETY: LibFuzzer guarantees there will be `size` bytes of data at the
  // address `data`.
  std::string input(data, UNSAFE_BUFFERS(data + size));
  list.SetFromPacString(input);
  return 0;
}
