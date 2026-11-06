// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock unexportable key provider implementation
// summary: Implements the default gmock behavior of MockUnexportableKeyProvider, returning itself as the stateful key provider.
// ---

#include "crypto/mock_unexportable_key_provider.h"

#include "testing/gmock/include/gmock/gmock.h"

namespace crypto {

using ::testing::Return;

MockUnexportableKeyProvider::MockUnexportableKeyProvider() {
  ON_CALL(*this, AsStatefulUnexportableKeyProvider).WillByDefault(Return(this));
}
MockUnexportableKeyProvider::~MockUnexportableKeyProvider() = default;

}  // namespace crypto
