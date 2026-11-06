// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock CastMetricsHelper implementation
// summary: Implements the constructor and destructor of the MockCastMetricsHelper gmock test double.
// ---

#include "chromecast/base/metrics/mock_cast_metrics_helper.h"

namespace chromecast {
namespace metrics {

MockCastMetricsHelper::MockCastMetricsHelper() : CastMetricsHelper() {}

MockCastMetricsHelper::~MockCastMetricsHelper() = default;

}  // namespace metrics
}  // namespace chromecast
