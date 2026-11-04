// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock layer tree mutator implementation
// summary: Provides the default constructor and destructor for the MockLayerTreeMutator test double.
// ---

#include "cc/test/mock_layer_tree_mutator.h"

namespace cc {

MockLayerTreeMutator::MockLayerTreeMutator() = default;

MockLayerTreeMutator::~MockLayerTreeMutator() = default;

}  // namespace cc
