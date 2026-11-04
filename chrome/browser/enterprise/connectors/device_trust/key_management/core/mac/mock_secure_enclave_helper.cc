// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Secure Enclave helper implementation
// summary: Implements the constructor and destructor of the MockSecureEnclaveHelper test double.
// ---

#include "chrome/browser/enterprise/connectors/device_trust/key_management/core/mac/mock_secure_enclave_helper.h"

namespace enterprise_connectors::test {

MockSecureEnclaveHelper::MockSecureEnclaveHelper() = default;
MockSecureEnclaveHelper::~MockSecureEnclaveHelper() = default;

}  // namespace enterprise_connectors::test
