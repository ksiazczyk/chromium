// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Keychain test helpers header
// summary: Declares SecKeyFromPKCS8, a test helper that converts a PKCS#8 encoded private key into a Security framework SecKeyRef.
// ---

#ifndef CRYPTO_APPLE_TEST_HELPERS_H_
#define CRYPTO_APPLE_TEST_HELPERS_H_

#include <Security/SecKey.h>

#include "base/apple/scoped_cftyperef.h"
#include "base/containers/span.h"

namespace crypto::apple {

// Converts a PKCS#8 encoded private key in `pkcs8` into a SecKeyRef.
// Returns a null scoper if the key could not be parsed.
base::apple::ScopedCFTypeRef<SecKeyRef> SecKeyFromPKCS8(
    base::span<const uint8_t> pkcs8);

}  // namespace crypto::apple

#endif  // CRYPTO_APPLE_TEST_HELPERS_H_
