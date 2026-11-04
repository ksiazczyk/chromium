// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page load metrics provider header
// summary: Declares a MetricsProvider that interfaces with page_load_metrics and flushes metrics on Android app background events.
// ---

#ifndef CHROME_BROWSER_METRICS_PAGE_LOAD_METRICS_PROVIDER_H_
#define CHROME_BROWSER_METRICS_PAGE_LOAD_METRICS_PROVIDER_H_

#include "components/metrics/metrics_provider.h"

// MetricsProvider that interfaces with page_load_metrics. Note that this class
// is currently only used on Android.
class PageLoadMetricsProvider : public metrics::MetricsProvider {
 public:
  PageLoadMetricsProvider();

  PageLoadMetricsProvider(const PageLoadMetricsProvider&) = delete;
  PageLoadMetricsProvider& operator=(const PageLoadMetricsProvider&) = delete;

  ~PageLoadMetricsProvider() override;

  // metrics:MetricsProvider:
  void OnAppEnterBackground() override;
};

#endif  // CHROME_BROWSER_METRICS_PAGE_LOAD_METRICS_PROVIDER_H_
