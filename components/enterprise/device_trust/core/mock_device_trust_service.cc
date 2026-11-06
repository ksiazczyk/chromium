// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockDeviceTrustService implementation
// summary: Implements the constructor and destructor of the MockDeviceTrustService test double that stands in for DeviceTrustService in tests.
// ---

#include "components/enterprise/device_trust/core/mock_device_trust_service.h"

namespace enterprise_connectors {
namespace test {

MockDeviceTrustService::MockDeviceTrustService() = default;
MockDeviceTrustService::~MockDeviceTrustService() = default;

}  // namespace test
}  // namespace enterprise_connectors
