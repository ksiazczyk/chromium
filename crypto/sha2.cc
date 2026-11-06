// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SHA-256 hashing implementation
// summary: Implements SHA256Hash and the SHA256HashString convenience wrapper as one-shot SHA-256 operations on top of BoringSSL.
// ---

#include "crypto/sha2.h"

#include <stddef.h>

#include <memory>

#include "base/strings/string_view_util.h"
#include "crypto/secure_hash.h"
#include "third_party/boringssl/src/include/openssl/sha.h"

namespace crypto {

std::array<uint8_t, kSHA256Length> SHA256Hash(base::span<const uint8_t> input) {
  std::array<uint8_t, kSHA256Length> digest;
  ::SHA256(input.data(), input.size(), digest.data());
  return digest;
}

std::string SHA256HashString(std::string_view str) {
  return std::string(base::as_string_view(SHA256Hash(base::as_byte_span(str))));
}

}  // namespace crypto
