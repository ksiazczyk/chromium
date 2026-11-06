// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Worker node base definitions
// summary: Defines constructors and destructors for the WorkerNode interface and the WorkerNodeObserver base class.
// ---

#include "components/performance_manager/public/graph/worker_node.h"

#include "components/performance_manager/graph/worker_node_impl.h"

namespace performance_manager {

WorkerNode::WorkerNode() = default;
WorkerNode::~WorkerNode() = default;

WorkerNodeObserver::WorkerNodeObserver() = default;
WorkerNodeObserver::~WorkerNodeObserver() = default;

}  // namespace performance_manager
