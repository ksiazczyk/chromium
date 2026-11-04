// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: NTP modules test support implementation
// summary: Provides a mock history service and helpers that compute disabled feature lists for new tab page module tests.
// ---

#include "chrome/browser/new_tab_page/modules/test_support.h"

#include <algorithm>
#include <string>
#include <vector>

#include "base/test/scoped_feature_list.h"

namespace ntp {

MockHistoryService::MockHistoryService() = default;

MockHistoryService::~MockHistoryService() = default;

const std::vector<base::test::FeatureRef>& kAllModuleFeatures = {
    ntp_features::kNtpCalendarModule,
    ntp_features::kNtpDriveModule,
    ntp_features::kNtpMostRelevantTabResumptionModule,
    ntp_features::kNtpOutlookCalendarModule,
};

std::vector<base::test::FeatureRef> ComputeDisabledFeaturesList(
    const std::vector<base::test::FeatureRef>& features,
    const std::vector<base::test::FeatureRef>& enabled_features) {
  std::vector<base::test::FeatureRef> disabled_features;
  std::copy_if(
      features.begin(), features.end(), std::back_inserter(disabled_features),
      [&enabled_features](base::test::FeatureRef feature_to_copy) {
        return !std::ranges::contains(enabled_features, feature_to_copy);
      });
  return disabled_features;
}

}  // namespace ntp
