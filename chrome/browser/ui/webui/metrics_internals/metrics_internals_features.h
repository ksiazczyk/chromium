// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Metrics internals feature declarations
// summary: Declares the kPrivateMetricsWebUI feature flag that enables a Private Metrics tab on the metrics-internals page.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_METRICS_INTERNALS_METRICS_INTERNALS_FEATURES_H_
#define CHROME_BROWSER_UI_WEBUI_METRICS_INTERNALS_METRICS_INTERNALS_FEATURES_H_

#include "base/feature_list.h"

namespace features {

// Enables a "Private Metrics" tab in the chrome://metrics-internals page.
BASE_DECLARE_FEATURE(kPrivateMetricsWebUI);

}  // namespace features

#endif  // CHROME_BROWSER_UI_WEBUI_METRICS_INTERNALS_METRICS_INTERNALS_FEATURES_H_
