// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BELayerHierarchyTransport implementation
// summary: Implements the singleton instance accessors for BELayerHierarchyTransport, storing and returning the process-wide instance used for iOS layer hierarchy transport.
// ---

#include "gpu/ipc/common/ios/be_layer_hierarchy_transport.h"

#include "base/check.h"

namespace gpu {
namespace {

BELayerHierarchyTransport* g_instance = nullptr;

}  // namespace

// static
BELayerHierarchyTransport* BELayerHierarchyTransport::GetInstance() {
  DCHECK(g_instance);
  return g_instance;
}

// static
void BELayerHierarchyTransport::SetInstance(
    BELayerHierarchyTransport* instance) {
  DCHECK(!g_instance || !instance);
  g_instance = instance;
}

}  // namespace gpu
