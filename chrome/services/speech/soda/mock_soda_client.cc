// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock SODA client implementation
// summary: Provides the constructor and destructor for MockSodaClient, the gmock test double of SodaClient used by tests.
// ---

#include "chrome/services/speech/soda/mock_soda_client.h"

namespace soda {

MockSodaClient::MockSodaClient() = default;
MockSodaClient::~MockSodaClient() = default;

}  // namespace soda
