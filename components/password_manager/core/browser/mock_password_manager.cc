
// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock password manager implementation
// summary: Provides constructor and destructor definitions for the MockPasswordManager test double.
// ---

#include "components/password_manager/core/browser/mock_password_manager.h"

namespace password_manager {

MockPasswordManager::MockPasswordManager() = default;
MockPasswordManager::~MockPasswordManager() = default;

}  // namespace password_manager
