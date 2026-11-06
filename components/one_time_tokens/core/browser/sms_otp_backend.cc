// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SMS OTP backend implementation
// summary: Implements the SmsOtpBackend destructor for the abstract interface that fetches one-time tokens sent via SMS.
// ---

#include "components/one_time_tokens/core/browser/sms_otp_backend.h"

namespace one_time_tokens {

SmsOtpBackend::~SmsOtpBackend() = default;

}  // namespace one_time_tokens
