// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for commerce utility converting optimization guide results
// summary: Declares OptGuideResultToProductInfo, which converts optimization guide metadata into a caller-owned ProductInfo object.
// ---

#ifndef COMPONENTS_COMMERCE_CORE_COMMERCE_UTILS_H_
#define COMPONENTS_COMMERCE_CORE_COMMERCE_UTILS_H_

#include "components/commerce/core/commerce_types.h"
#include "components/optimization_guide/core/hints/optimization_metadata.h"

namespace commerce {

// Produce a ProductInfo object given OptimizationGuideMeta. The returned
// unique_ptr is owned by the caller and will be empty if conversion failed
// or there was no info.
std::unique_ptr<ProductInfo> OptGuideResultToProductInfo(
    const optimization_guide::OptimizationMetadata& metadata);

}  // namespace commerce

#endif  // COMPONENTS_COMMERCE_CORE_COMMERCE_UTILS_H_
