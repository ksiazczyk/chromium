// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Virtual keyboard container layout manager implementation
// summary: Implements the aura layout manager that keeps the virtual keyboard container window sized to match the IME window parent container.
// relations:
//   - implements /ash/keyboard/virtual_keyboard_container_layout_manager.h
//   - depends_on /ash/public/cpp/shell_window_ids.h
//   - depends_on /ui/aura/window.h
// ---

#include "ash/keyboard/virtual_keyboard_container_layout_manager.h"
#include "ash/public/cpp/shell_window_ids.h"
#include "ui/aura/window.h"

namespace ash {

VirtualKeyboardContainerLayoutManager::VirtualKeyboardContainerLayoutManager(
    aura::Window* parent)
    : ime_window_parent_container_(parent) {
  DCHECK(ime_window_parent_container_);
}

void VirtualKeyboardContainerLayoutManager::OnWindowResized() {
  aura::Window* vk_container = ime_window_parent_container_->GetChildById(
      kShellWindowId_VirtualKeyboardContainer);
  DCHECK(vk_container);
  vk_container->SetBounds(ime_window_parent_container_->bounds());
}

void VirtualKeyboardContainerLayoutManager::OnWindowAddedToLayout(
    aura::Window* child) {
  if (child->GetId() == kShellWindowId_VirtualKeyboardContainer)
    SetChildBounds(child, ime_window_parent_container_->bounds());
}

void VirtualKeyboardContainerLayoutManager::SetChildBounds(
    aura::Window* child,
    const gfx::Rect& requested_bounds) {
  if (child->bounds() != requested_bounds)
    SetChildBoundsDirect(child, requested_bounds);
}

}  // namespace ash
