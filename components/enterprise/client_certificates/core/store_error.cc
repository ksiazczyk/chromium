// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: StoreError to string conversion
// summary: Implements StoreErrorToString, mapping certificate store error codes such as invalid identity name or key creation failure to their string names.
// ---

#include "components/enterprise/client_certificates/core/store_error.h"

namespace client_certificates {

std::string_view StoreErrorToString(StoreError error) {
  switch (error) {
    case StoreError::kUnknown:
      return "Unknown";
    case StoreError::kInvalidIdentityName:
      return "InvalidIdentityName";
    case StoreError::kInvalidDatabaseState:
      return "InvalidDatabaseState";
    case StoreError::kGetDatabaseEntryFailed:
      return "GetDatabaseEntryFailed";
    case StoreError::kConflictingIdentity:
      return "ConflictingIdentity";
    case StoreError::kCreateKeyFailed:
      return "CreateKeyFailed";
    case StoreError::kSaveKeyFailed:
      return "SaveKeyFailed";
    case StoreError::kInvalidCertificateInput:
      return "InvalidCertificateInput";
    case StoreError::kCertificateCommitFailed:
      return "CertificateCommitFailed";
    case StoreError::kLoadKeyFailed:
      return "LoadKeyFailed";
    case StoreError::kInvalidFinalIdentityName:
      return "InvalidFinalIdentityName";
    case StoreError::kIdentityNotFound:
      return "IdentityNotFound";
    case StoreError::kDeleteIdentityFailed:
      return "DeleteIdentityFailed";
  }
}

}  // namespace client_certificates
