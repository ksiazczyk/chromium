// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Result metadata describer header
// summary: Declares DescribeResultMetadata, which renders result metadata as a mergeable dictionary for node descriptions in the discards graph debug page.
// ---

#ifndef COMPONENTS_PERFORMANCE_MANAGER_RESOURCE_ATTRIBUTION_NODE_DATA_DESCRIBERS_H_
#define COMPONENTS_PERFORMANCE_MANAGER_RESOURCE_ATTRIBUTION_NODE_DATA_DESCRIBERS_H_

#include "base/values.h"
#include "components/performance_manager/public/resource_attribution/query_results.h"

namespace resource_attribution {

// Returns a description of `metadata` for chrome://discards/graph. The result
// can be added to the description of a node with base::DictValue::Merge().
base::DictValue DescribeResultMetadata(const ResultMetadata& metadata);

}  // namespace resource_attribution

#endif  // COMPONENTS_PERFORMANCE_MANAGER_RESOURCE_ATTRIBUTION_NODE_DATA_DESCRIBERS_H_
