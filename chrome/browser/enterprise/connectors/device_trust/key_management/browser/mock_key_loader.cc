// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockKeyLoader implementation
// summary: Provides the constructor and destructor for the MockKeyLoader gmock used to fake key loading in tests.
// ---

#include "chrome/browser/enterprise/connectors/device_trust/key_management/browser/mock_key_loader.h"

namespace enterprise_connectors::test {

MockKeyLoader::MockKeyLoader() = default;
MockKeyLoader::~MockKeyLoader() = default;

}  // namespace enterprise_connectors::test
