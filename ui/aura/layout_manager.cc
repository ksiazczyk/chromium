// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LayoutManager implementation
// summary: Implements LayoutManager basics, including SetChildBoundsDirect for forcibly setting child window bounds.
// ---

#include "ui/aura/layout_manager.h"

#include "ui/aura/window.h"

namespace aura {

LayoutManager::LayoutManager() {
}

LayoutManager::~LayoutManager() {
}

void LayoutManager::SetChildBoundsDirect(aura::Window* child,
                                         const gfx::Rect& bounds) {
  child->SetBoundsInternal(bounds);
}

}  // namespace aura
