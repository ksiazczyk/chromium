// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock device attestation service interface
// summary: Declares a GMock mock of the DeviceAttestationService interface for use in tests.
// ---

#ifndef COMPONENTS_ENTERPRISE_DEVICE_ATTESTATION_MOCK_DEVICE_ATTESTATION_SERVICE_H_
#define COMPONENTS_ENTERPRISE_DEVICE_ATTESTATION_MOCK_DEVICE_ATTESTATION_SERVICE_H_

#include "components/enterprise/device_attestation/device_attestation_service.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace enterprise_management {
class ChromeProfileReportRequest;
}

namespace enterprise::test {

// Mock implementation of the DeviceAttestationService interface.
class MockDeviceAttestationService : public DeviceAttestationService {
 public:
  MockDeviceAttestationService();
  ~MockDeviceAttestationService() override;

  // KeyPersistenceDelegate:
  MOCK_METHOD(void,
              GetAttestationResponse,
              (std::string_view,
               const enterprise_management::ChromeProfileReportRequest&,
               std::string_view,
               std::string_view,
               std::string_view,
               DeviceAttestationCallback),
              (override));
};

}  // namespace enterprise::test

#endif  // COMPONENTS_ENTERPRISE_DEVICE_ATTESTATION_MOCK_DEVICE_ATTESTATION_SERVICE_H_
