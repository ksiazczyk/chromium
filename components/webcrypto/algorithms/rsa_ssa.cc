// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RSASSA-PKCS1-v1_5 WebCrypto algorithm
// summary: Implements the RSASSA-PKCS1-v1_5 WebCrypto algorithm, mapping SHA hash variants to JWK algorithm names and delegating sign and verify to RSA helpers.
// ---

#include <stdint.h>

#include <memory>

#include "components/webcrypto/algorithms/rsa.h"
#include "components/webcrypto/algorithms/rsa_sign.h"
#include "components/webcrypto/status.h"

namespace webcrypto {

namespace {

class RsaSsaImplementation : public RsaHashedAlgorithm {
 public:
  RsaSsaImplementation()
      : RsaHashedAlgorithm(blink::kWebCryptoKeyUsageVerify,
                           blink::kWebCryptoKeyUsageSign) {}

  const char* GetJwkAlgorithm(
      const blink::WebCryptoAlgorithmId hash) const override {
    switch (hash) {
      case blink::kWebCryptoAlgorithmIdSha1:
        return "RS1";
      case blink::kWebCryptoAlgorithmIdSha256:
        return "RS256";
      case blink::kWebCryptoAlgorithmIdSha384:
        return "RS384";
      case blink::kWebCryptoAlgorithmIdSha512:
        return "RS512";
      default:
        return nullptr;
    }
  }

  Status Sign(const blink::WebCryptoAlgorithm& algorithm,
              const blink::WebCryptoKey& key,
              base::span<const uint8_t> data,
              std::vector<uint8_t>* buffer) const override {
    return RsaSign(key, 0, data, buffer);
  }

  Status Verify(const blink::WebCryptoAlgorithm& algorithm,
                const blink::WebCryptoKey& key,
                base::span<const uint8_t> signature,
                base::span<const uint8_t> data,
                bool* signature_match) const override {
    return RsaVerify(key, 0, signature, data, signature_match);
  }
};

}  // namespace

std::unique_ptr<AlgorithmImplementation> CreateRsaSsaImplementation() {
  return std::make_unique<RsaSsaImplementation>();
}

}  // namespace webcrypto
