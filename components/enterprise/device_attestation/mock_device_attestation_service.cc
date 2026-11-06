// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock device attestation service implementation
// summary: Implements the GMock-based mock of DeviceAttestationService used as test support in unit tests.
// ---

#include "components/enterprise/device_attestation/mock_device_attestation_service.h"

namespace enterprise::test {

MockDeviceAttestationService::MockDeviceAttestationService() = default;
MockDeviceAttestationService::~MockDeviceAttestationService() = default;

}  // namespace enterprise::test
