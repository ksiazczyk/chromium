// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SMS OTP to one-time token retrieval error converter implementation
// summary: Maps each SmsOtpRetrievalApiError code to the corresponding OneTimeTokenRetrievalError used by the one-time tokens backend.
// ---

#include "components/one_time_tokens/android/backend/sms/sms_otp_to_one_time_token_retrieval_error_converter.h"

#include "base/notreached.h"
#include "components/one_time_tokens/android/backend/sms/sms_otp_retrieval_api_errors.h"
#include "components/one_time_tokens/core/browser/one_time_token_retrieval_error.h"

namespace one_time_tokens {

OneTimeTokenRetrievalError ConvertSmsOtpRetrievalApiError(
    SmsOtpRetrievalApiError error) {
  // LINT.IfChange
  switch (error) {
    case SmsOtpRetrievalApiError::kGmscoreVersionNotSupported:
      return OneTimeTokenRetrievalError::kSmsOtpGmscoreVersionNotSupported;
    case SmsOtpRetrievalApiError::kError:
      return OneTimeTokenRetrievalError::kSmsOtpBackendError;
    case SmsOtpRetrievalApiError::kTimeout:
      return OneTimeTokenRetrievalError::kSmsOtpBackendTimeout;
    case SmsOtpRetrievalApiError::kPlatformNotSupported:
      return OneTimeTokenRetrievalError::kSmsOtpBackendPlatformNotSupported;
    case SmsOtpRetrievalApiError::kApiNotAvailable:
      return OneTimeTokenRetrievalError::kSmsOtpBackendApiNotAvailable;
    case SmsOtpRetrievalApiError::kUserPermissionRequired:
      return OneTimeTokenRetrievalError::kSmsOtpBackendUserPermissionRequired;
    case SmsOtpRetrievalApiError::kUnknown:
      return OneTimeTokenRetrievalError::kSmsOtpUnknown;
  }
  // LINT.ThenChange(//components/one_time_tokens/core/browser/one_time_token_retrieval_error.h)
}

}  // namespace one_time_tokens
