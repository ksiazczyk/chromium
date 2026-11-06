// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock password feature manager implementation
// summary: Provides the constructor and destructor for the mock PasswordFeatureManager used in tests.
// ---

#include "components/password_manager/core/browser/mock_password_feature_manager.h"

namespace password_manager {

MockPasswordFeatureManager::MockPasswordFeatureManager() = default;

MockPasswordFeatureManager::~MockPasswordFeatureManager() = default;

}  // namespace password_manager
