// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IOSRegionalCapabilitiesMetricsProvider class declaration
// summary: Declares IOSRegionalCapabilitiesMetricsProvider, a metrics provider that reports current session regional program data to UMA.
// ---

#ifndef IOS_CHROME_BROWSER_REGIONAL_CAPABILITIES_MODEL_IOS_REGIONAL_CAPABILITIES_METRICS_PROVIDER_H_
#define IOS_CHROME_BROWSER_REGIONAL_CAPABILITIES_MODEL_IOS_REGIONAL_CAPABILITIES_METRICS_PROVIDER_H_

#include "components/metrics/metrics_provider.h"

namespace regional_capabilities {

class IOSRegionalCapabilitiesMetricsProvider : public metrics::MetricsProvider {
 public:
  IOSRegionalCapabilitiesMetricsProvider();
  ~IOSRegionalCapabilitiesMetricsProvider() override;

  // metrics::MetricsProvider
  void ProvideCurrentSessionData(
      metrics::ChromeUserMetricsExtension* uma_proto) override;
};

}  // namespace regional_capabilities

#endif  // IOS_CHROME_BROWSER_REGIONAL_CAPABILITIES_MODEL_IOS_REGIONAL_CAPABILITIES_METRICS_PROVIDER_H_
