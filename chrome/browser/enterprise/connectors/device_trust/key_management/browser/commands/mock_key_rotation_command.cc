// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock key rotation command implementation
// summary: Provides the default constructor and destructor definitions for the mock key rotation command used in tests.
// ---

#include "chrome/browser/enterprise/connectors/device_trust/key_management/browser/commands/mock_key_rotation_command.h"

namespace enterprise_connectors {
namespace test {

MockKeyRotationCommand::MockKeyRotationCommand() = default;
MockKeyRotationCommand::~MockKeyRotationCommand() = default;

}  // namespace test
}  // namespace enterprise_connectors
