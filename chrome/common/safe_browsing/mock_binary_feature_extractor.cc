// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock binary feature extractor
// summary: Provides a mock BinaryFeatureExtractor implementation for use in safe browsing tests.
// ---

#include "chrome/common/safe_browsing/mock_binary_feature_extractor.h"

namespace safe_browsing {

MockBinaryFeatureExtractor::MockBinaryFeatureExtractor() = default;

MockBinaryFeatureExtractor::~MockBinaryFeatureExtractor() = default;

}  // namespace safe_browsing
