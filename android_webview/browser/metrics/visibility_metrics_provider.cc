// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VisibilityMetricsProvider implementation
// summary: Implements VisibilityMetricsProvider by recording the metrics collected by VisibilityMetricsLogger when ProvideCurrentSessionData is called.
// relations:
//   - depends_on /android_webview/browser/metrics/visibility_metrics_provider.h
//   - depends_on /android_webview/browser/metrics/visibility_metrics_logger.h
// ---

#include "android_webview/browser/metrics/visibility_metrics_provider.h"

#include "android_webview/browser/metrics/visibility_metrics_logger.h"

namespace android_webview {

VisibilityMetricsProvider::VisibilityMetricsProvider(
    VisibilityMetricsLogger* logger)
    : logger_(logger) {}

VisibilityMetricsProvider::~VisibilityMetricsProvider() = default;

void VisibilityMetricsProvider::ProvideCurrentSessionData(
    metrics::ChromeUserMetricsExtension* uma_proto) {
  logger_->RecordMetrics();
}

}  // namespace android_webview