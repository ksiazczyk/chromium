// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock key rotation launcher implementation
// summary: Implements the constructor and destructor of MockKeyRotationLauncher, a GoogleMock test double for the device trust key rotation launcher.
// ---

#include "chrome/browser/enterprise/connectors/device_trust/key_management/browser/mock_key_rotation_launcher.h"

namespace enterprise_connectors {
namespace test {

MockKeyRotationLauncher::MockKeyRotationLauncher() = default;
MockKeyRotationLauncher::~MockKeyRotationLauncher() = default;

}  // namespace test
}  // namespace enterprise_connectors
