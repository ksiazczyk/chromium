// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BluetoothMetricsProvider implementation
// summary: Implements BluetoothMetricsProvider, emitting a histogram that reports whether the Floss or BlueZ stack is active.
// ---

#include "chrome/browser/metrics/bluetooth_metrics_provider.h"

#include "base/functional/bind.h"
#include "base/metrics/histogram_functions.h"
#include "device/bluetooth/floss/floss_features.h"

namespace metrics {

BluetoothMetricsProvider::BluetoothMetricsProvider() = default;

BluetoothMetricsProvider::~BluetoothMetricsProvider() = default;

bool BluetoothMetricsProvider::ProvideHistograms() {
  base::UmaHistogramEnumeration("Bluetooth.StackName",
                                floss::features::IsFlossEnabled()
                                    ? BluetoothStackName::kFloss
                                    : BluetoothStackName::kBlueZ);
  return true;
}

}  // namespace metrics
