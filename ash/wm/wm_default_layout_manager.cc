// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WmDefaultLayoutManager implementation
// summary: Implements the default ash window layout manager, applying requested child bounds directly and leaving the other layout event handlers empty.
// ---

#include "ash/wm/wm_default_layout_manager.h"

#include "ui/aura/window.h"

namespace ash {

WmDefaultLayoutManager::WmDefaultLayoutManager() = default;

WmDefaultLayoutManager::~WmDefaultLayoutManager() = default;

void WmDefaultLayoutManager::OnWindowResized() {}

void WmDefaultLayoutManager::OnWindowAddedToLayout(aura::Window* child) {}

void WmDefaultLayoutManager::OnWillRemoveWindowFromLayout(aura::Window* child) {
}

void WmDefaultLayoutManager::OnWindowRemovedFromLayout(aura::Window* child) {}

void WmDefaultLayoutManager::OnChildWindowVisibilityChanged(aura::Window* child,
                                                            bool visible) {}

void WmDefaultLayoutManager::SetChildBounds(aura::Window* child,
                                            const gfx::Rect& requested_bounds) {
  SetChildBoundsDirect(child, requested_bounds);
}

}  // namespace ash
