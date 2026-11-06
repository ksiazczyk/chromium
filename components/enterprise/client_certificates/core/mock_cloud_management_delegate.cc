// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock cloud management delegate implementation
// summary: Implements the constructor and destructor of the MockCloudManagementDelegate test double.
// ---

#include "components/enterprise/client_certificates/core/mock_cloud_management_delegate.h"

namespace enterprise_attestation {

MockCloudManagementDelegate::MockCloudManagementDelegate() = default;
MockCloudManagementDelegate::~MockCloudManagementDelegate() = default;

}  // namespace enterprise_attestation
