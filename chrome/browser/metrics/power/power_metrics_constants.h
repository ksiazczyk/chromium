// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Power metrics interval constants declaration
// summary: Declares the short and long power metrics interval duration constants shared by power metrics code.
// ---

#ifndef CHROME_BROWSER_METRICS_POWER_POWER_METRICS_CONSTANTS_H_
#define CHROME_BROWSER_METRICS_POWER_POWER_METRICS_CONSTANTS_H_

#include "base/time/time.h"

extern const base::TimeDelta kShortPowerMetricsIntervalDuration;
extern const base::TimeDelta kLongPowerMetricsIntervalDuration;

#endif  // CHROME_BROWSER_METRICS_POWER_POWER_METRICS_CONSTANTS_H_
