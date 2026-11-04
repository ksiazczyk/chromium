// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Metrics consent override implementation
// summary: Implements the MetricsConsentOverride test helper that forces metrics and crash reporting consent via ChromeMetricsServiceAccessor and triggers upload permission updates.
// ---

#include "chrome/browser/metrics/testing/metrics_consent_override.h"

#include "chrome/browser/browser_process.h"
#include "chrome/browser/metrics/chrome_metrics_service_accessor.h"
#include "components/metrics_services_manager/metrics_services_manager.h"

namespace metrics::test {

MetricsConsentOverride::MetricsConsentOverride(bool initial_state)
    : state_(initial_state) {
  ChromeMetricsServiceAccessor::SetMetricsAndCrashReportingForTesting(&state_);
  Update(initial_state);
}

MetricsConsentOverride::~MetricsConsentOverride() {
  ChromeMetricsServiceAccessor::SetMetricsAndCrashReportingForTesting(
      /*value=*/nullptr);
}

void MetricsConsentOverride::Update(bool state) {
  state_ = state;
  // Trigger rechecking of metrics state.
  g_browser_process->GetMetricsServicesManager()->UpdateUploadPermissions();
}

}  // namespace metrics::test
