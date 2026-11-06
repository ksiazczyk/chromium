// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestCompositorHost shared implementation
// summary: Implements TestCompositorHost::GetLayerTreeHost by returning the layer tree host of the associated compositor.
// ---

#include "ui/compositor/test/test_compositor_host.h"
#include "ui/compositor/compositor.h"

namespace ui {

cc::LayerTreeHost* TestCompositorHost::GetLayerTreeHost() {
  return GetCompositor()->host_.get();
}

}  // namespace ui
