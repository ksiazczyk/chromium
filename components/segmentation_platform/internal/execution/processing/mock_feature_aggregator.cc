// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockFeatureAggregator implementation
// summary: Implements the constructor and destructor of the gmock feature aggregator used in place of the real aggregator during tests.
// ---

#include "components/segmentation_platform/internal/execution/processing/mock_feature_aggregator.h"

namespace segmentation_platform::processing {

MockFeatureAggregator::MockFeatureAggregator() = default;
MockFeatureAggregator::~MockFeatureAggregator() = default;

}  // namespace segmentation_platform::processing