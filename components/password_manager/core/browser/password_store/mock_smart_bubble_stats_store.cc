// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockSmartBubbleStatsStore implementation
// summary: Provides the constructor and destructor of the gmock-based MockSmartBubbleStatsStore used as a test double for SmartBubbleStatsStore.
// ---

#include "components/password_manager/core/browser/password_store/mock_smart_bubble_stats_store.h"

namespace password_manager {

MockSmartBubbleStatsStore::MockSmartBubbleStatsStore() = default;

MockSmartBubbleStatsStore::~MockSmartBubbleStatsStore() = default;

}  // namespace password_manager
