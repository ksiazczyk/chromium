// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock key persistence delegate implementation
// summary: Implements the constructor and destructor of the mock key persistence delegate used in tests.
// ---

#include "chrome/browser/enterprise/connectors/device_trust/key_management/core/persistence/mock_key_persistence_delegate.h"

namespace enterprise_connectors {
namespace test {

MockKeyPersistenceDelegate::MockKeyPersistenceDelegate() = default;
MockKeyPersistenceDelegate::~MockKeyPersistenceDelegate() = default;

}  // namespace test
}  // namespace enterprise_connectors
