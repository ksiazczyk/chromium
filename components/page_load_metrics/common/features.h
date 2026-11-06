// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Declarations for page load metrics feature flags
// summary: Declares the kThrottleSendingCustomUserTimings base feature in the page_load_metrics::features namespace.
// ---

#ifndef COMPONENTS_PAGE_LOAD_METRICS_COMMON_FEATURES_H_
#define COMPONENTS_PAGE_LOAD_METRICS_COMMON_FEATURES_H_

#include "base/feature_list.h"

namespace page_load_metrics::features {

BASE_DECLARE_FEATURE(kThrottleSendingCustomUserTimings);

}  // namespace page_load_metrics::features

#endif  // COMPONENTS_PAGE_LOAD_METRICS_COMMON_FEATURES_H_
