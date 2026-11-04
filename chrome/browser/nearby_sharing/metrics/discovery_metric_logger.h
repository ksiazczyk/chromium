// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Nearby Share discovery metrics logger header
// summary: Declares DiscoveryMetricLogger, a NearbySharingService observer that measures the time to discover share targets.
// ---

#ifndef CHROME_BROWSER_NEARBY_SHARING_METRICS_DISCOVERY_METRIC_LOGGER_H_
#define CHROME_BROWSER_NEARBY_SHARING_METRICS_DISCOVERY_METRIC_LOGGER_H_

#include "base/time/time.h"
#include "chrome/browser/nearby_sharing/nearby_sharing_service.h"

namespace nearby::share::metrics {

class DiscoveryMetricLogger : public NearbySharingService::Observer {
 public:
  DiscoveryMetricLogger();
  ~DiscoveryMetricLogger() override;

  // NearbySharingService::Observer
  void OnShareTargetDiscoveryStarted() override;
  void OnShareTargetDiscoveryStopped() override;
  void OnShareTargetAdded(const ShareTarget& share_target) override;

 private:
  std::optional<base::TimeTicks> discovery_start_;
};

}  // namespace nearby::share::metrics

#endif  // CHROME_BROWSER_NEARBY_SHARING_METRICS_DISCOVERY_METRIC_LOGGER_H_
