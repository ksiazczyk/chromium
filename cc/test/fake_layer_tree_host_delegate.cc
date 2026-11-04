// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake layer tree host delegate implementation
// summary: Implements a stub layer tree host delegate that supplies fake frame sinks and re-requests them after initialization failures.
// ---

#include "cc/test/fake_layer_tree_host_delegate.h"

#include "cc/test/fake_layer_tree_frame_sink.h"
#include "cc/trees/layer_tree_host.h"

namespace cc {

FakeLayerTreeHostDelegate::FakeLayerTreeHostDelegate() = default;
FakeLayerTreeHostDelegate::~FakeLayerTreeHostDelegate() = default;

void FakeLayerTreeHostDelegate::RequestNewLayerTreeFrameSink() {
  DCHECK(host_);
  host_->SetLayerTreeFrameSink(software_comp_
                                   ? FakeLayerTreeFrameSink::CreateSoftware()
                                   : FakeLayerTreeFrameSink::Create3d());
}

void FakeLayerTreeHostDelegate::DidFailToInitializeLayerTreeFrameSink() {
  RequestNewLayerTreeFrameSink();
}

}  // namespace cc
