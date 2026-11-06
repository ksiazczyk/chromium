// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LayerDelegate default callback implementation
// summary: Implements the default no-op layer property change callbacks of the LayerDelegate interface.
// ---

#include "ui/compositor/layer_delegate.h"

namespace ui {

void LayerDelegate::OnLayerBoundsChanged(const gfx::Rect& old_bounds,
                                         PropertyChangeReason reason) {}

void LayerDelegate::OnLayerTransformed(const gfx::Transform& old_transform,
                                       PropertyChangeReason reason) {}

void LayerDelegate::OnLayerOpacityChanged(PropertyChangeReason reason) {}

void LayerDelegate::OnLayerAlphaShapeChanged() {}

void LayerDelegate::OnLayerFillsBoundsOpaquelyChanged(
    PropertyChangeReason reason) {}

void LayerDelegate::OnLayerClipRectChanged(const gfx::Rect& old_rect,
                                           PropertyChangeReason reason) {}

void LayerDelegate::UpdateVisualState() {}

}  // namespace ui
