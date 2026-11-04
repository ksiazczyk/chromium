// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockKeyNetworkDelegate test implementation
// summary: Provides constructor and destructor definitions for the mocked KeyNetworkDelegate used as test support.
// ---

#include "chrome/browser/enterprise/connectors/device_trust/key_management/core/network/mock_key_network_delegate.h"

namespace enterprise_connectors {
namespace test {

MockKeyNetworkDelegate::MockKeyNetworkDelegate() = default;
MockKeyNetworkDelegate::~MockKeyNetworkDelegate() = default;

}  // namespace test
}  // namespace enterprise_connectors
