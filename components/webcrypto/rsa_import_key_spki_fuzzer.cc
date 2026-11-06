// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: RSA SPKI key import fuzzer
// summary: LibFuzzer entry point that imports RSA public keys from SPKI encoded fuzz data through the WebCrypto import path.
// ---

#include <stddef.h>
#include <stdint.h>

#include "components/webcrypto/fuzzer_support.h"

// Entry point for LibFuzzer.
extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  webcrypto::ImportRsaKeyFromDerFuzzData(data, size,
                                         blink::kWebCryptoKeyFormatSpki);
  return 0;
}
