// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WiFi network metrics helper header
// summary: Declares the WifiNetworkMetricsHelper class, which provides static APIs for logging WiFi network metrics such as whether a new network is initially configured as hidden.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_NETWORK_METRICS_WIFI_NETWORK_METRICS_HELPER_H_
#define CHROMEOS_ASH_COMPONENTS_NETWORK_METRICS_WIFI_NETWORK_METRICS_HELPER_H_

#include "base/component_export.h"

namespace ash {

// Provides APIs for logging various WiFi network metrics.
class COMPONENT_EXPORT(CHROMEOS_NETWORK) WifiNetworkMetricsHelper {
 public:
  // Logs whether a newly created network was initially configured as hidden.
  static void LogInitiallyConfiguredAsHidden(bool is_hidden);

  WifiNetworkMetricsHelper() = default;
  WifiNetworkMetricsHelper(const WifiNetworkMetricsHelper&) = delete;
  WifiNetworkMetricsHelper& operator=(const WifiNetworkMetricsHelper&) = delete;
  ~WifiNetworkMetricsHelper() = default;
};

}  // namespace ash

#endif  // CHROMEOS_ASH_COMPONENTS_NETWORK_METRICS_WIFI_NETWORK_METRICS_HELPER_H_
