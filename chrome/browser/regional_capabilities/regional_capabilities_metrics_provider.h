// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RegionalCapabilitiesMetricsProvider header
// summary: Declares the RegionalCapabilitiesMetricsProvider class that supplies regional program data to Chrome metrics.
// ---

#ifndef CHROME_BROWSER_REGIONAL_CAPABILITIES_REGIONAL_CAPABILITIES_METRICS_PROVIDER_H_
#define CHROME_BROWSER_REGIONAL_CAPABILITIES_REGIONAL_CAPABILITIES_METRICS_PROVIDER_H_

#include "components/metrics/metrics_provider.h"

namespace regional_capabilities {

class RegionalCapabilitiesMetricsProvider : public metrics::MetricsProvider {
 public:
  RegionalCapabilitiesMetricsProvider() = default;
  RegionalCapabilitiesMetricsProvider(
      const RegionalCapabilitiesMetricsProvider&) = delete;
  RegionalCapabilitiesMetricsProvider& operator=(
      const RegionalCapabilitiesMetricsProvider&) = delete;
  ~RegionalCapabilitiesMetricsProvider() override = default;

  // metrics::MetricsProvider
  void ProvideCurrentSessionData(
      metrics::ChromeUserMetricsExtension* uma_proto) override;
};

}  // namespace regional_capabilities

#endif  // CHROME_BROWSER_REGIONAL_CAPABILITIES_REGIONAL_CAPABILITIES_METRICS_PROVIDER_H_
