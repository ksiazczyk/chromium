// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Private key source conversions
// summary: Defines conversions between PrivateKeySource values and their proto or integer representations.
// ---

#include "components/enterprise/client_certificates/core/private_key_types.h"

namespace client_certificates {

std::optional<PrivateKeySource> ToPrivateKeySource(
    client_certificates_pb::PrivateKey::PrivateKeySource proto_key_source) {
  switch (proto_key_source) {
    case client_certificates_pb::PrivateKey::PRIVATE_UNEXPORTABLE_KEY:
      return PrivateKeySource::kUnexportableKey;
    case client_certificates_pb::PrivateKey::PRIVATE_SOFTWARE_KEY:
      return PrivateKeySource::kSoftwareKey;
    case client_certificates_pb::PrivateKey::PRIVATE_OS_SOFTWARE_KEY:
      return PrivateKeySource::kOsSoftwareKey;
    case client_certificates_pb::PrivateKey::PRIVATE_ANDROID_KEY:
      return PrivateKeySource::kAndroidKey;
    case client_certificates_pb::PrivateKey::PRIVATE_CHROME_OS_HW_KEY:
      return PrivateKeySource::kChromeOsHwKey;
    case client_certificates_pb::PrivateKey::PRIVATE_CHROME_OS_SW_KEY:
      return PrivateKeySource::kChromeOsSwKey;
    default:
      return std::nullopt;
  }
}

client_certificates_pb::PrivateKey::PrivateKeySource ToProtoKeySource(
    PrivateKeySource private_key_source) {
  switch (private_key_source) {
    case PrivateKeySource::kUnexportableKey:
      return client_certificates_pb::PrivateKey::PRIVATE_UNEXPORTABLE_KEY;
    case PrivateKeySource::kSoftwareKey:
      return client_certificates_pb::PrivateKey::PRIVATE_SOFTWARE_KEY;
    case PrivateKeySource::kOsSoftwareKey:
      return client_certificates_pb::PrivateKey::PRIVATE_OS_SOFTWARE_KEY;
    case PrivateKeySource::kAndroidKey:
      return client_certificates_pb::PrivateKey::PRIVATE_ANDROID_KEY;
    case PrivateKeySource::kChromeOsHwKey:
      return client_certificates_pb::PrivateKey::PRIVATE_CHROME_OS_HW_KEY;
    case PrivateKeySource::kChromeOsSwKey:
      return client_certificates_pb::PrivateKey::PRIVATE_CHROME_OS_SW_KEY;
  }
}

std::optional<PrivateKeySource> ToPrivateKeySource(int pref_key_source) {
  switch (pref_key_source) {
    case 0:
      return PrivateKeySource::kUnexportableKey;
    case 1:
      return PrivateKeySource::kSoftwareKey;
    case 2:
      return PrivateKeySource::kOsSoftwareKey;
    case 3:
      return PrivateKeySource::kAndroidKey;
    case 4:
      return PrivateKeySource::kChromeOsHwKey;
    case 5:
      return PrivateKeySource::kChromeOsSwKey;
    default:
      return std::nullopt;
  }
}

}  // namespace client_certificates
