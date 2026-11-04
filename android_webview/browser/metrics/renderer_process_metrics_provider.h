// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Renderer process metrics provider header
// summary: Declares a metrics provider that logs whether a WebView instance runs in single-process or multi-process renderer mode.
// relations:
//   - depends_on /components/metrics/metrics_provider.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_METRICS_RENDERER_PROCESS_METRICS_PROVIDER_H_
#define ANDROID_WEBVIEW_BROWSER_METRICS_RENDERER_PROCESS_METRICS_PROVIDER_H_

#include "components/metrics/metrics_provider.h"

namespace android_webview {

// RendererProcessMetricsProvider is responsible for logging whether a WebView
// instance is running in single process (with an in process renderer) or multi
// process (with an out of process renderer) mode.
class RendererProcessMetricsProvider : public metrics::MetricsProvider {
 public:
  RendererProcessMetricsProvider() = default;

  ~RendererProcessMetricsProvider() override = default;

  void ProvideCurrentSessionData(
      metrics::ChromeUserMetricsExtension* uma_proto) override;

  RendererProcessMetricsProvider(const RendererProcessMetricsProvider&) =
      delete;

  RendererProcessMetricsProvider& operator=(
      const RendererProcessMetricsProvider&) = delete;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_METRICS_RENDERER_PROCESS_METRICS_PROVIDER_H_
