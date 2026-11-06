// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Payment method URL string constants
// summary: Defines constants for payment method identifiers such as Google Pay, Android Pay, Play Billing, and secure payment confirmation.
// ---

#include "components/payments/core/method_strings.h"

namespace payments {
namespace methods {

// Please keep the list alphabetized.

const char kAndroidPay[] = "https://android.com/pay";
const char kGooglePay[] = "https://google.com/pay";
const char kGooglePayAuthentication[] = "https://pay.google.com/authentication";
const char kGooglePlayBilling[] = "https://play.google.com/billing";
const char kSecurePaymentConfirmation[] = "secure-payment-confirmation";

}  // namespace methods
}  // namespace payments
