// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LayerSelectionBound implementation
// summary: Implements the LayerSelectionBound constructor, equality operators, and ToString formatting for layer-attached selection end points.
// ---

#include "base/strings/stringprintf.h"
#include "cc/input/layer_selection_bound.h"

namespace cc {

LayerSelectionBound::LayerSelectionBound()
    : type(gfx::SelectionBound::EMPTY), layer_id(0), hidden(false) {}

LayerSelectionBound::~LayerSelectionBound() = default;

bool LayerSelectionBound::operator==(const LayerSelectionBound& other) const {
  return type == other.type && layer_id == other.layer_id &&
         edge_start == other.edge_start && edge_end == other.edge_end &&
         hidden == other.hidden;
}

bool LayerSelectionBound::operator!=(const LayerSelectionBound& other) const {
  return !(*this == other);
}

std::string LayerSelectionBound::ToString() const {
  return base::StringPrintf("LayerSelectionBound(%s, %s, %d)",
                            edge_start.ToString().c_str(),
                            edge_end.ToString().c_str(), hidden);
}

}  // namespace cc
