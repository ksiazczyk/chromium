// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock OTP manager implementation
// summary: Provides the constructor and destructor for the MockOtpManager gmock class used as a test stand-in for OtpManager.
// ---

#include "components/autofill/core/browser/integrators/one_time_tokens/mock_otp_manager.h"

namespace autofill {

MockOtpManager::MockOtpManager() = default;
MockOtpManager::~MockOtpManager() = default;

}  // namespace autofill
