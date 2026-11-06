// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test encryptor implementation
// summary: Implements TestEncryptor, an Encryptor subclass whose encryption and decryption availability can be overridden for use in higher-level tests.
// ---

#include "components/os_crypt/async/common/test_encryptor.h"

#include "components/os_crypt/async/common/encryptor.h"

namespace os_crypt_async {

TestEncryptor::TestEncryptor(KeyRing keys,
                             const std::string& provider_for_encryption)
    : Encryptor(std::move(keys), provider_for_encryption) {}

bool TestEncryptor::IsEncryptionAvailable() const {
  return is_encryption_available_.value_or(Encryptor::IsEncryptionAvailable());
}

bool TestEncryptor::IsDecryptionAvailable() const {
  return is_decryption_available_.value_or(Encryptor::IsDecryptionAvailable());
}

}  // namespace os_crypt_async
