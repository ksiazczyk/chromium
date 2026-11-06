// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock facilitated payments client implementation
// summary: Implements the constructor and destructor of MockFacilitatedPaymentsClient, the GMock test double for the facilitated payments client interface.
// ---

#include "components/facilitated_payments/core/browser/mock_facilitated_payments_client.h"

namespace payments::facilitated {

MockFacilitatedPaymentsClient::MockFacilitatedPaymentsClient() = default;

MockFacilitatedPaymentsClient::~MockFacilitatedPaymentsClient() = default;

}  // namespace payments::facilitated
