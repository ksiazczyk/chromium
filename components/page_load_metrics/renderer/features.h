// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page load metrics renderer feature declaration
// summary: Declares the kMetricsRenderFrameObserverImprovement base feature for the renderer.
// ---

#ifndef COMPONENTS_PAGE_LOAD_METRICS_RENDERER_FEATURES_H_
#define COMPONENTS_PAGE_LOAD_METRICS_RENDERER_FEATURES_H_

#include "base/feature_list.h"

namespace page_load_metrics::features {
BASE_DECLARE_FEATURE(kMetricsRenderFrameObserverImprovement);
}
#endif  // COMPONENTS_PAGE_LOAD_METRICS_RENDERER_FEATURES_H_
