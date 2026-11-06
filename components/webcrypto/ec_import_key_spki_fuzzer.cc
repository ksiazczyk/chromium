// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: LibFuzzer entry point for EC key import from SPKI
// summary: LibFuzzer entry point that exercises EC key import from SPKI DER data via webcrypto::ImportEcKeyFromDerFuzzData.
// ---

#include <stddef.h>
#include <stdint.h>

#include "components/webcrypto/fuzzer_support.h"

// Entry point for LibFuzzer.
extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  webcrypto::ImportEcKeyFromDerFuzzData(data, size,
                                        blink::kWebCryptoKeyFormatSpki);
  return 0;
}
