// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LayerTree factory implementation
// summary: Implements the LayerTree::Create factory that instantiates a LayerTreeImpl with the compositor's begin-frame and occlusion tracking constants.
// ---

#include "cc/slim/layer_tree.h"

#include <utility>

#include "base/memory/ptr_util.h"
#include "cc/slim/constants.h"
#include "cc/slim/layer_tree_impl.h"

namespace cc::slim {

// static
std::unique_ptr<LayerTree> LayerTree::Create(LayerTreeClient* client) {
  return base::WrapUnique<LayerTree>(
      new LayerTreeImpl(client, kNumUnneededBeginFrameBeforeStop,
                        kMinimumOcclusionTrackingDimension));
}

}  // namespace cc::slim
