// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fingerprint parser fuzzer entry point
// summary: libFuzzer harness that feeds arbitrary input strings to the fingerprint parser to check its robustness.
// ---

#include <stddef.h>
#include <stdint.h>
#include <string>

#include "components/payments/content/utility/fingerprint_parser.h"
#include "components/payments/core/error_logger.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  payments::ErrorLogger log;
  log.DisableInTest();
  payments::FingerprintStringToByteArray(
      std::string(reinterpret_cast<const char*>(data), size), log);
  return 0;
}
