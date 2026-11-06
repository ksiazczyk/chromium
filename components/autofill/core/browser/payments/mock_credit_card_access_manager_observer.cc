// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock credit card access manager observer implementation
// summary: Implements the constructor and destructor of the gmock observer used to fake CreditCardAccessManager event notifications in tests.
// ---

#include "components/autofill/core/browser/payments/mock_credit_card_access_manager_observer.h"

namespace autofill {

MockCreditCardAccessManagerObserver::MockCreditCardAccessManagerObserver() =
    default;

MockCreditCardAccessManagerObserver::~MockCreditCardAccessManagerObserver() =
    default;

}  // namespace autofill
