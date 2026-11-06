// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock session authorization service client
// summary: Defines the constructor and destructor of MockSessionAuthzServiceClient, a gmock-based stand-in for SessionAuthzServiceClient used in tests.
// ---

#include "remoting/base/mock_session_authz_service_client.h"

namespace remoting {

MockSessionAuthzServiceClient::MockSessionAuthzServiceClient() = default;
MockSessionAuthzServiceClient::~MockSessionAuthzServiceClient() = default;

}  // namespace remoting
