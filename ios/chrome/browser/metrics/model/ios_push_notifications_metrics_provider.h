// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IOS push notifications metrics provider header
// summary: Declares the metrics provider that reports push notification permission status data with each metrics session.
// ---

#ifndef IOS_CHROME_BROWSER_METRICS_MODEL_IOS_PUSH_NOTIFICATIONS_METRICS_PROVIDER_H_
#define IOS_CHROME_BROWSER_METRICS_MODEL_IOS_PUSH_NOTIFICATIONS_METRICS_PROVIDER_H_

#include "components/metrics/metrics_provider.h"

class IOSPushNotificationsMetricsProvider : public metrics::MetricsProvider {
 public:
  IOSPushNotificationsMetricsProvider();
  ~IOSPushNotificationsMetricsProvider() override;

  // metrics::MetricsProvider
  void ProvideCurrentSessionData(
      metrics::ChromeUserMetricsExtension* uma_proto) override;
};

#endif  // IOS_CHROME_BROWSER_METRICS_MODEL_IOS_PUSH_NOTIFICATIONS_METRICS_PROVIDER_H_
