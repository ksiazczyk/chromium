// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock content payment request delegate implementation
// summary: Implements the constructor and destructor of MockContentPaymentRequestDelegate, a gmock-based test double for the content payment request delegate.
// ---

#include "components/payments/content/mock_content_payment_request_delegate.h"

namespace payments {

MockContentPaymentRequestDelegate::MockContentPaymentRequestDelegate() =
    default;
MockContentPaymentRequestDelegate::~MockContentPaymentRequestDelegate() =
    default;

}  // namespace payments
