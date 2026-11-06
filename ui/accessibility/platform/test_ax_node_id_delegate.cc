// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test AX node ID delegate implementation
// summary: Implements TestAXNodeIdDelegate, which creates and tracks unique accessibility node IDs and removes them when nodes are deleted.
// ---

#include "ui/accessibility/platform/test_ax_node_id_delegate.h"

namespace ui {

TestAXNodeIdDelegate::TestAXNodeIdDelegate() = default;
TestAXNodeIdDelegate::~TestAXNodeIdDelegate() = default;

ui::AXPlatformNodeId TestAXNodeIdDelegate::GetOrCreateAXNodeUniqueId(
    ui::AXNodeID ax_node_id) {
  auto [iter, inserted] =
      ax_unique_ids_.try_emplace(ax_node_id, ui::AXUniqueId::CreateInvalid());
  if (inserted) {
    iter->second = ui::AXUniqueId::Create();
  }
  return iter->second;
}

void TestAXNodeIdDelegate::OnAXNodeDeleted(ui::AXNodeID ax_node_id) {
  ax_unique_ids_.erase(ax_node_id);
}

}  // namespace ui
