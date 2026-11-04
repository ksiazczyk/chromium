// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Viewport property IDs header
// summary: Declares the ViewportPropertyIds struct, which stores property tree node IDs for viewport transforms, clips and scrolls.
// ---

#ifndef CC_TREES_VIEWPORT_PROPERTY_IDS_H_
#define CC_TREES_VIEWPORT_PROPERTY_IDS_H_

#include "cc/paint/element_id.h"
#include "cc/trees/property_tree.h"

namespace cc {

struct ViewportPropertyIds {
  int overscroll_elasticity_transform = kInvalidPropertyNodeId;
  int page_scale_transform = kInvalidPropertyNodeId;
  int inner_scroll = kInvalidPropertyNodeId;
  int outer_clip = kInvalidPropertyNodeId;
  int outer_scroll = kInvalidPropertyNodeId;
};

}  // namespace cc

#endif  // CC_TREES_VIEWPORT_PROPERTY_IDS_H_
