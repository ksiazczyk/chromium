// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fuzzer for re-encrypting payloads
// summary: libFuzzer harness that exercises CipherEncrypt on arbitrary input payloads for the re-encryption fuzzer target.
// ---


#include <stdint.h>

#include <optional>

#include "components/password_manager/core/browser/leak_detection/encryption_utils.h"

namespace password_manager {

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  std::string payload(reinterpret_cast<const char*>(data), size);
  std::string key;
  std::optional<std::string> result = CipherEncrypt(payload, &key);
  return 0;
}

}  // namespace password_manager
