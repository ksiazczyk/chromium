// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowMirrorViewPip implementation
// summary: Implements a mirror view for picture-in-picture windows that reuses the source window's layer instead of creating a separate mirror layer.
// ---

#include "ash/wm/window_mirror_view_pip.h"

namespace ash {

WindowMirrorViewPip::WindowMirrorViewPip(aura::Window* source)
    : WindowMirrorView(source) {}

WindowMirrorViewPip::~WindowMirrorViewPip() = default;

void WindowMirrorViewPip::InitLayerOwner() {
  // Do nothing.
}

ui::Layer* WindowMirrorViewPip::GetMirrorLayer() {
  return layer();
}

}  // namespace ash
