// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock cloud management delegate
// summary: GMock test double for CloudManagementDelegate that stubs DM token retrieval and browser public key uploads for tests.
// ---

#ifndef COMPONENTS_ENTERPRISE_CLIENT_CERTIFICATES_CORE_MOCK_CLOUD_MANAGEMENT_DELEGATE_H_
#define COMPONENTS_ENTERPRISE_CLIENT_CERTIFICATES_CORE_MOCK_CLOUD_MANAGEMENT_DELEGATE_H_

#include "components/enterprise/client_certificates/core/cloud_management_delegate.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace enterprise_attestation {

class MockCloudManagementDelegate : public CloudManagementDelegate {
 public:
  MockCloudManagementDelegate();
  ~MockCloudManagementDelegate() override;

  MOCK_METHOD(std::optional<std::string>, GetDMToken, (), (const, override));
  MOCK_METHOD(void,
              UploadBrowserPublicKey,
              (const enterprise_management::DeviceManagementRequest&,
               policy::DMServerJobConfiguration::Callback callback),
              (override));
};

}  // namespace enterprise_attestation

#endif  // COMPONENTS_ENTERPRISE_CLIENT_CERTIFICATES_CORE_MOCK_CLOUD_MANAGEMENT_DELEGATE_H_
