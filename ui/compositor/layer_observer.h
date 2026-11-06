// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LayerObserver interface
// summary: Defines the LayerObserver interface with callbacks for layer destruction and layer recreation events in the ui compositor.
// ---

#ifndef UI_COMPOSITOR_LAYER_OBSERVER_H_
#define UI_COMPOSITOR_LAYER_OBSERVER_H_

#include "ui/compositor/compositor_export.h"

namespace ui {

class Layer;

class COMPOSITOR_EXPORT LayerObserver {
 public:
  virtual void LayerDestroyed(Layer* layer) {}
  virtual void OnLayerRecreated(Layer* old_layer, Layer* new_layer) {}

 protected:
  virtual ~LayerObserver() {}
};

}  // namespace ui

#endif  // UI_COMPOSITOR_LAYER_OBSERVER_H_
