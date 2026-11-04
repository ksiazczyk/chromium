// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock certificate provisioning client implementation
// summary: Provides constructor and destructor definitions for MockCertProvisioningClient, a gmock test double for the certificate provisioning client.
// ---

#include "chrome/browser/ash/cert_provisioning/mock_cert_provisioning_client.h"

namespace ash::cert_provisioning {

MockCertProvisioningClient::MockCertProvisioningClient() = default;
MockCertProvisioningClient::~MockCertProvisioningClient() = default;

}  // namespace ash::cert_provisioning
