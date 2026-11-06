// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page load metrics renderer feature flags
// summary: Defines the kMetricsRenderFrameObserverImprovement feature, enabled by default, to reduce observer calls.
// ---

#include "components/page_load_metrics/renderer/features.h"

#include "base/feature_list.h"

namespace page_load_metrics::features {
// Reduce the number of observer calls. crbug.com/40442595 for more details.
BASE_FEATURE(kMetricsRenderFrameObserverImprovement,
             base::FEATURE_ENABLED_BY_DEFAULT);
}  // namespace page_load_metrics::features
