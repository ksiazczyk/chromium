// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: System node base implementation
// summary: Implements constructors and destructors for the public SystemNode and SystemNodeObserver classes.
// ---

#include "components/performance_manager/public/graph/system_node.h"

#include "components/performance_manager/graph/system_node_impl.h"

namespace performance_manager {

SystemNode::SystemNode() = default;
SystemNode::~SystemNode() = default;

SystemNodeObserver::SystemNodeObserver() = default;
SystemNodeObserver::~SystemNodeObserver() = default;

}  // namespace performance_manager
