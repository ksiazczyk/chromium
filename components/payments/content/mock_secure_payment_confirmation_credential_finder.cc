// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock secure payment confirmation credential finder implementation
// summary: Implements the constructor and destructor of MockSecurePaymentConfirmationCredentialFinder, a test double for secure payment confirmation credential lookup.
// ---

#include "components/payments/content/mock_secure_payment_confirmation_credential_finder.h"

namespace payments {

MockSecurePaymentConfirmationCredentialFinder::
    MockSecurePaymentConfirmationCredentialFinder() = default;
MockSecurePaymentConfirmationCredentialFinder::
    ~MockSecurePaymentConfirmationCredentialFinder() = default;

}  // namespace payments
