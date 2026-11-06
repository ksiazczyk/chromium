// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock certificate provisioning service implementation
// summary: Implements the constructor and destructor of the MockCertificateProvisioningService test double.
// ---

#include "components/enterprise/client_certificates/core/mock_certificate_provisioning_service.h"

namespace client_certificates {

MockCertificateProvisioningService::MockCertificateProvisioningService() =
    default;
MockCertificateProvisioningService::~MockCertificateProvisioningService() =
    default;

}  // namespace client_certificates
