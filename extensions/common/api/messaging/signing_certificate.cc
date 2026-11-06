// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of ParseCertificatesFromMojom for signing certificates
// summary: Implements ParseCertificatesFromMojom, converting Mojo-deserialized certificate byte vectors into fixed-size SigningCertificate arrays for extension messaging.
// ---

#include "extensions/common/api/messaging/signing_certificate.h"

#include <algorithm>

namespace extensions {

SigningCertificates ParseCertificatesFromMojom(
    const MojomSigningCertificates& certificates) {
  SigningCertificates parsed_certificates;
  parsed_certificates.reserve(certificates.size());
  for (const auto& cert : certificates) {
    SigningCertificate cert_array;
    std::ranges::copy(cert, cert_array.begin());
    parsed_certificates.push_back(cert_array);
  }
  return parsed_certificates;
}

}  // namespace extensions
