// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: iOS feed activity metrics provider header
// summary: Declares a metrics provider that supplies current session feed activity data for the Chrome UMA protocol.
// ---

#ifndef IOS_CHROME_BROWSER_METRICS_MODEL_IOS_FEED_ACTIVITY_METRICS_PROVIDER_H_
#define IOS_CHROME_BROWSER_METRICS_MODEL_IOS_FEED_ACTIVITY_METRICS_PROVIDER_H_

#include "components/metrics/metrics_provider.h"

class IOSFeedActivityMetricsProvider : public metrics::MetricsProvider {
 public:
  IOSFeedActivityMetricsProvider();
  ~IOSFeedActivityMetricsProvider() override;

  // metrics::MetricsProvider
  void ProvideCurrentSessionData(
      metrics::ChromeUserMetricsExtension* uma_proto) override;
};

#endif  // IOS_CHROME_BROWSER_METRICS_MODEL_IOS_FEED_ACTIVITY_METRICS_PROVIDER_H_
