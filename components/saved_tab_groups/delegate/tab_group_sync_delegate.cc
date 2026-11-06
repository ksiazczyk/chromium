// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group sync delegate implementation
// summary: Implements StartBatchOperation for the TabGroupSyncDelegate, returning a new ScopedBatchOperation instance.
// ---

#include "components/saved_tab_groups/delegate/tab_group_sync_delegate.h"

namespace tab_groups {

std::unique_ptr<TabGroupSyncDelegate::ScopedBatchOperation>
TabGroupSyncDelegate::StartBatchOperation() {
  return std::make_unique<ScopedBatchOperation>();
}

}  // namespace tab_groups
