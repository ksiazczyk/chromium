// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DelegatingLayoutManager implementation
// summary: Implements DelegatingLayoutManager, forwarding proposed-layout calculation and pre-apply layout hooks to its LayoutDelegate.
// ---

#include "ui/views/layout/delegating_layout_manager.h"

#include "ui/views/layout/proposed_layout.h"

namespace views {

DelegatingLayoutManager::DelegatingLayoutManager(LayoutDelegate* delegate)
    : delegate_(delegate) {
  DCHECK(delegate_);
}

DelegatingLayoutManager::~DelegatingLayoutManager() = default;

ProposedLayout DelegatingLayoutManager::CalculateProposedLayout(
    const SizeBounds& size_bounds) const {
  return delegate_->CalculateProposedLayout(size_bounds);
}

void DelegatingLayoutManager::BeforeApplyLayout(const ProposedLayout& layout) {
  delegate_->BeforeApplyLayout(layout);
}

}  // namespace views
