// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Viewport layers implementation
// summary: Implements the constructor and destructor of the ViewportLayers struct that identifies key viewport layers to the compositor thread.
// ---

#include "cc/trees/viewport_layers.h"

#include "cc/layers/layer.h"

namespace cc {

ViewportLayers::ViewportLayers() = default;
ViewportLayers::~ViewportLayers() = default;

}  // namespace cc
