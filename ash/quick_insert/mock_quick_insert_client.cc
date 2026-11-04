// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Quick Insert client implementation
// summary: Provides the constructor and destructor of the mock Quick Insert client used in tests.
// relations:
//   - implements /ash/quick_insert/mock_quick_insert_client.h
// ---

#include "ash/quick_insert/mock_quick_insert_client.h"

namespace ash {

MockQuickInsertClient::~MockQuickInsertClient() = default;

MockQuickInsertClient::MockQuickInsertClient() = default;

}  // namespace ash
