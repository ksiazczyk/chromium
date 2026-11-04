// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Posix metric evaluator helper implementation
// summary: Stub POSIX implementation of the metric evaluators helper whose free memory query hits NOTREACHED.
// ---

#include "chrome/browser/performance_monitor/metric_evaluator_helper_posix.h"

#include "base/notreached.h"

namespace performance_monitor {

MetricEvaluatorsHelperPosix::MetricEvaluatorsHelperPosix() = default;
MetricEvaluatorsHelperPosix::~MetricEvaluatorsHelperPosix() = default;

std::optional<int> MetricEvaluatorsHelperPosix::GetFreePhysicalMemoryMb() {
  NOTREACHED();
}

}  // namespace performance_monitor
