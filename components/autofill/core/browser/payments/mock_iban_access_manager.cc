// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock IBAN access manager implementation
// summary: Implements the MockIbanAccessManager constructor and destructor for test use.
// ---

#include "components/autofill/core/browser/payments/mock_iban_access_manager.h"

namespace autofill {

MockIbanAccessManager::MockIbanAccessManager(AutofillClient* client)
    : IbanAccessManager(client) {}

MockIbanAccessManager::~MockIbanAccessManager() = default;

}  // namespace autofill
