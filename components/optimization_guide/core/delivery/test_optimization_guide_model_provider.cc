// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test optimization guide model provider implementation
// summary: Implements a no-op OptimizationGuideModelProvider test double for unit testing features that rely on the Optimization Guide.
// ---

#include "components/optimization_guide/core/delivery/test_optimization_guide_model_provider.h"

namespace optimization_guide {

TestOptimizationGuideModelProvider::TestOptimizationGuideModelProvider() =
    default;
TestOptimizationGuideModelProvider::~TestOptimizationGuideModelProvider() =
    default;

void TestOptimizationGuideModelProvider::AddObserverForOptimizationTargetModel(
    optimization_guide::proto::OptimizationTarget optimization_target,
    const std::optional<proto::Any>& model_metadata,
    scoped_refptr<base::SequencedTaskRunner> model_task_runner,
    optimization_guide::OptimizationTargetModelObserver* observer) {}

void TestOptimizationGuideModelProvider::
    RemoveObserverForOptimizationTargetModel(
        optimization_guide::proto::OptimizationTarget optimization_target,
        optimization_guide::OptimizationTargetModelObserver* observer) {}

}  // namespace optimization_guide
