// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock enterprise network auth service
// summary: Implements the constructor and destructor of the MockEnterpriseNetworkAuthService test double used in place of the auth service.
// ---

#include "components/enterprise/net/core/mock_enterprise_network_auth_service.h"

namespace enterprise_net {

MockEnterpriseNetworkAuthService::MockEnterpriseNetworkAuthService() = default;

MockEnterpriseNetworkAuthService::~MockEnterpriseNetworkAuthService() = default;

}  // namespace enterprise_net
