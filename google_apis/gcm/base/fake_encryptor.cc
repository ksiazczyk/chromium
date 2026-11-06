// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FakeEncryptor base64 implementation
// summary: Implements FakeEncryptor, which base64-encodes plaintext as ciphertext and is intended only for testing.
// ---

#include "google_apis/gcm/base/fake_encryptor.h"

#include "base/base64.h"

namespace gcm {

FakeEncryptor::~FakeEncryptor() {}

bool FakeEncryptor::EncryptString(const std::string& plaintext,
                                  std::string* ciphertext) {
  *ciphertext = base::Base64Encode(plaintext);
  return true;
}

bool FakeEncryptor::DecryptString(const std::string& ciphertext,
                                  std::string* plaintext) {
  return base::Base64Decode(ciphertext, plaintext);
}

}  // namespace gcm
