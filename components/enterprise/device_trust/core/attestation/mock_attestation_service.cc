// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock attestation service implementation
// summary: Defines the constructor and destructor of the MockAttestationService test double used in attestation tests.
// ---

#include "components/enterprise/device_trust/core/attestation/mock_attestation_service.h"

namespace enterprise_connectors {
namespace test {

MockAttestationService::MockAttestationService() = default;
MockAttestationService::~MockAttestationService() = default;

}  // namespace test
}  // namespace enterprise_connectors
