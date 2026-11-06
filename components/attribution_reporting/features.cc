// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Attribution Reporting feature flag definitions
// summary: Defines the kConversionMeasurement base::Feature that controls whether the Conversion Measurement API infrastructure is enabled.
// ---

#include "components/attribution_reporting/features.h"

#include "base/feature_list.h"

namespace attribution_reporting::features {

// Controls whether the Conversion Measurement API infrastructure is enabled.
BASE_FEATURE(kConversionMeasurement, base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace attribution_reporting::features
