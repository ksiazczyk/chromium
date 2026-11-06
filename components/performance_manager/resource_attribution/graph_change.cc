// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Graph Change Implementation
// summary: Implements constructors and destructors for GraphChangeUpdateOrigin, a graph change variant used in resource attribution measurement distribution.
// ---

#include "components/performance_manager/resource_attribution/graph_change.h"

namespace resource_attribution {

GraphChangeUpdateOrigin::GraphChangeUpdateOrigin(
    const performance_manager::Node* node,
    std::optional<url::Origin> previous_origin)
    : node(node), previous_origin(std::move(previous_origin)) {}

GraphChangeUpdateOrigin::~GraphChangeUpdateOrigin() = default;

GraphChangeUpdateOrigin::GraphChangeUpdateOrigin(
    const GraphChangeUpdateOrigin&) = default;
GraphChangeUpdateOrigin& GraphChangeUpdateOrigin::operator=(
    const GraphChangeUpdateOrigin&) = default;
GraphChangeUpdateOrigin::GraphChangeUpdateOrigin(GraphChangeUpdateOrigin&&) =
    default;
GraphChangeUpdateOrigin& GraphChangeUpdateOrigin::operator=(
    GraphChangeUpdateOrigin&&) = default;

}  // namespace resource_attribution
