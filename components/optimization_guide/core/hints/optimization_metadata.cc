// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Optimization metadata implementation
// summary: Defines the constructors and destructor for the OptimizationMetadata class that carries metadata attached to an optimization.
// ---

#include "components/optimization_guide/core/hints/optimization_metadata.h"

namespace optimization_guide {

OptimizationMetadata::OptimizationMetadata() = default;
OptimizationMetadata::~OptimizationMetadata() = default;
OptimizationMetadata::OptimizationMetadata(const OptimizationMetadata&) =
    default;

}  // namespace optimization_guide
