// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock trigger manager implementation
// summary: Implements the MockTriggerManager constructor and destructor backing the gmock stubs used by trigger unit tests.
// ---

#include "components/safe_browsing/content/browser/triggers/mock_trigger_manager.h"

namespace safe_browsing {

MockTriggerManager::MockTriggerManager() : TriggerManager(nullptr, nullptr) {}

MockTriggerManager::~MockTriggerManager() = default;

}  // namespace safe_browsing
