// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Webium metrics mapping feature flag definition
// summary: Defines the kWebiumMetricsMapping feature and its base64-encoded config string parameter for metrics mapping.
// ---

#include "components/metrics/mapping/metrics_mapping_features.h"

namespace metrics::features {

BASE_FEATURE(kWebiumMetricsMapping, base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE_PARAM(std::string,
                   kWebiumMetricsMappingConfig,
                   &kWebiumMetricsMapping,
                   "config",
                   "");

}  // namespace metrics::features
