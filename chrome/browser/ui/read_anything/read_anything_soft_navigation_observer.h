// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Read Anything soft navigation observer header
// summary: Declares ReadAnythingSoftNavigationObserver, a page load metrics observer that reports soft navigations to the Read Anything controller.
// ---

#ifndef CHROME_BROWSER_UI_READ_ANYTHING_READ_ANYTHING_SOFT_NAVIGATION_OBSERVER_H_
#define CHROME_BROWSER_UI_READ_ANYTHING_READ_ANYTHING_SOFT_NAVIGATION_OBSERVER_H_

#include "components/page_load_metrics/browser/page_load_metrics_observer.h"

class ReadAnythingSoftNavigationObserver
    : public page_load_metrics::PageLoadMetricsObserver {
 public:
  ReadAnythingSoftNavigationObserver();

  ReadAnythingSoftNavigationObserver(
      const ReadAnythingSoftNavigationObserver&) = delete;
  ReadAnythingSoftNavigationObserver& operator=(
      const ReadAnythingSoftNavigationObserver&) = delete;

  ~ReadAnythingSoftNavigationObserver() override;

  // page_load_metrics::PageLoadMetricsObserver:
  ObservePolicy OnFencedFramesStart(
      content::NavigationHandle* navigation_handle,
      const GURL& currently_committed_url) override;
  ObservePolicy OnPrerenderStart(content::NavigationHandle* navigation_handle,
                                 const GURL& currently_committed_url) override;

  void OnSoftNavigationFirstContentfulPaint(
      const page_load_metrics::mojom::SoftNavigationMetrics&
          soft_navigation_metrics) override;
};

#endif  // CHROME_BROWSER_UI_READ_ANYTHING_READ_ANYTHING_SOFT_NAVIGATION_OBSERVER_H_
