// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Payment details validation header
// summary: Declares ValidatePaymentDetails, which checks a PaymentDetails object and reports an error message when validation fails.
// ---

#ifndef COMPONENTS_PAYMENTS_CORE_PAYMENT_DETAILS_VALIDATION_H_
#define COMPONENTS_PAYMENTS_CORE_PAYMENT_DETAILS_VALIDATION_H_

#include <string>

namespace payments {

class PaymentDetails;

bool ValidatePaymentDetails(const PaymentDetails& details,
                            std::string* error_message);

}  // namespace payments

#endif  // COMPONENTS_PAYMENTS_CORE_PAYMENT_DETAILS_VALIDATION_H_
