// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Mahi manager implementation
// summary: Implements the constructor and destructor of the MockMahiManager test double used in Ash Mahi tests.
// relations:
//   - implements /ash/system/mahi/test/mock_mahi_manager.h
// ---

#include "ash/system/mahi/test/mock_mahi_manager.h"

namespace ash {

MockMahiManager::MockMahiManager() = default;

MockMahiManager::~MockMahiManager() = default;

}  // namespace ash
