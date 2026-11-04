// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ARC accessibility utility implementation
// summary: Implements helpers that detect ARC or ghost windows and find the nearest ARC ancestor window by walking up the aura window hierarchy.
// ---

#include "chrome/browser/ash/arc/accessibility/arc_accessibility_util.h"

#include <optional>

#include "ash/public/cpp/app_types_util.h"
#include "chromeos/ash/experiences/arc/arc_util.h"
#include "ui/aura/window.h"

namespace arc {

namespace {

aura::Window* FindWindowToParent(bool (*predicate)(const aura::Window*),
                                 aura::Window* window) {
  while (window) {
    if (predicate(window))
      return window;
    window = window->parent();
  }
  return nullptr;
}

}  // namespace

bool IsArcOrGhostWindow(const aura::Window* window) {
  return window && (ash::IsArcWindow(window) ||
                    arc::GetWindowTaskOrSessionId(window).has_value());
}

aura::Window* FindArcWindow(aura::Window* window) {
  return FindWindowToParent(ash::IsArcWindow, window);
}

aura::Window* FindArcOrGhostWindow(aura::Window* window) {
  return FindWindowToParent(IsArcOrGhostWindow, window);
}

}  // namespace arc
