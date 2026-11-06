// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Quick Pair process manager implementation
// summary: Implements constructors and destructors for the mock Quick Pair process manager and its mock process reference used in tests.
// ---

#include "chromeos/ash/services/quick_pair/mock_quick_pair_process_manager.h"

namespace ash {
namespace quick_pair {

MockQuickPairProcessManager::MockProcessReference::MockProcessReference() =
    default;

MockQuickPairProcessManager::MockProcessReference::~MockProcessReference() =
    default;

MockQuickPairProcessManager::MockQuickPairProcessManager() = default;

MockQuickPairProcessManager::~MockQuickPairProcessManager() = default;

}  // namespace quick_pair
}  // namespace ash
