// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Energy metrics provider unit test
// summary: Unit test that verifies EnergyMetricsProvider can be created and captures energy metrics.
// ---

#include "components/power_metrics/energy_metrics_provider.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace power_metrics {

TEST(EnergyMetricsProviderTest, CaptureMetrics) {
  auto provider = EnergyMetricsProvider::Create();
  if (provider) {
    provider->CaptureMetrics();
  }
}

}  // namespace power_metrics
