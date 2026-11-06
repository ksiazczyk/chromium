// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock test payments network interface implementation
// summary: Implements the mock payments network interface constructor and destructor used in tests.
// ---

#include "components/autofill/core/browser/payments/mock_test_payments_network_interface.h"

#include "services/network/public/cpp/shared_url_loader_factory.h"

namespace autofill {

MockTestPaymentsNetworkInterface::MockTestPaymentsNetworkInterface()
    : payments::TestPaymentsNetworkInterface(
          /*url_loader_factory=*/nullptr,
          /*identity_manager=*/nullptr,
          /*personal_data_manager=*/nullptr) {}

MockTestPaymentsNetworkInterface::~MockTestPaymentsNetworkInterface() = default;

}  // namespace autofill
