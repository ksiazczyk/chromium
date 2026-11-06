// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Secure payment confirmation model implementation
// summary: Implements the constructors and weak pointer accessor for the secure payment confirmation data model.
// ---

#include "components/payments/content/secure_payment_confirmation_model.h"

namespace payments {

SecurePaymentConfirmationModel::SecurePaymentConfirmationModel() = default;

SecurePaymentConfirmationModel::~SecurePaymentConfirmationModel() = default;

base::WeakPtr<SecurePaymentConfirmationModel>
SecurePaymentConfirmationModel::GetWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace payments
