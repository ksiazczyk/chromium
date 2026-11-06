// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page load metrics test content browser client
// summary: Test browser client that attaches the metrics navigation throttle to main frame navigations for page load metrics tests.
// ---

#include "components/page_load_metrics/browser/page_load_metrics_test_content_browser_client.h"

#include <memory>
#include <vector>

#include "components/page_load_metrics/browser/metrics_navigation_throttle.h"
#include "content/public/browser/navigation_handle.h"
#include "content/public/browser/navigation_throttle_registry.h"

namespace page_load_metrics {

PageLoadMetricsTestContentBrowserClient::
    PageLoadMetricsTestContentBrowserClient() = default;

PageLoadMetricsTestContentBrowserClient::
    ~PageLoadMetricsTestContentBrowserClient() = default;

void PageLoadMetricsTestContentBrowserClient::CreateThrottlesForNavigation(
    content::NavigationThrottleRegistry& registry) {
  if (registry.GetNavigationHandle().IsInMainFrame()) {
    page_load_metrics::MetricsNavigationThrottle::CreateAndAdd(registry);
  }
}

}  // namespace page_load_metrics
