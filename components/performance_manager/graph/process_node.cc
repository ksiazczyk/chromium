// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Process node base definitions
// summary: Provides constructor and destructor definitions for ProcessNode and ProcessNodeObserver.
// ---

#include "components/performance_manager/public/graph/process_node.h"

#include "components/performance_manager/graph/process_node_impl.h"

namespace performance_manager {

ProcessNode::ProcessNode() = default;
ProcessNode::~ProcessNode() = default;

ProcessNodeObserver::ProcessNodeObserver() = default;
ProcessNodeObserver::~ProcessNodeObserver() = default;

}  // namespace performance_manager
