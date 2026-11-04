// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Power metrics interval constants
// summary: Defines the short ten-second and long two-minute power metrics interval duration constants.
// ---

#include "chrome/browser/metrics/power/power_metrics_constants.h"

const base::TimeDelta kShortPowerMetricsIntervalDuration = base::Seconds(10);
const base::TimeDelta kLongPowerMetricsIntervalDuration = base::Minutes(2);
