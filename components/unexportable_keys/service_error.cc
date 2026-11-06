// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Service error helpers
// summary: Implements IsPersistentError, classifying ServiceError values as persistent or retryable for the unexportable keys component.
// ---

#include "components/unexportable_keys/service_error.h"

namespace unexportable_keys {

bool IsPersistentError(ServiceError error) {
  switch (error) {
    case ServiceError::kCryptoApiFailed:
    case ServiceError::kKeyNotFound:
    case ServiceError::kKeyCollision:
    case ServiceError::kNoKeyProvider:
    case ServiceError::kAlgorithmNotSupported:
    case ServiceError::kVerifySignatureFailed:
    case ServiceError::kOperationNotSupported:
      return true;
    case ServiceError::kKeyNotReady:
    case ServiceError::kOperationCancelled:
      return false;
  }
}

}  // namespace unexportable_keys
