// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Awake instance limit calculator header
// summary: Declares the kGlicMaxAwakeInstances feature parameters and CalculateAwakeInstancesLimit, which scales the awake instance cap with available memory.
// ---

#ifndef CHROME_BROWSER_GLIC_SERVICE_GLIC_INSTANCE_LIMIT_CALCULATOR_H_
#define CHROME_BROWSER_GLIC_SERVICE_GLIC_INSTANCE_LIMIT_CALCULATOR_H_

#include <cstddef>

#include "base/feature_list.h"
#include "base/memory_coordinator/memory_limit.h"
#include "base/metrics/field_trial_params.h"

namespace glic {

BASE_DECLARE_FEATURE(kGlicMaxAwakeInstances);
extern const base::FeatureParam<int> kGlicMaxAwakeInstancesLimit;
extern const base::FeatureParam<size_t>
    kGlicMaxAwakeInstancesModeratePressureLimit;
extern const base::FeatureParam<size_t>
    kGlicMaxAwakeInstancesCriticalPressureLimit;

// Dynamically calculates the maximum awake instances limit based on the system
// memory limit (`memory_limit`).
//
// Performs piecewise linear interpolation across three anchor points using
// C++20 `std::lerp`:
//   * Critical memory pressure threshold (`kCriticalMemoryPressureThreshold`):
//     Critical limit (`critical_pressure_limit`).
//   * Moderate memory pressure threshold (`kModerateMemoryPressureThreshold`):
//     Moderate limit (`moderate_pressure_limit`).
//   * No memory pressure threshold (`kNoMemoryPressureThreshold`):
//     Baseline unscaled limit (`default_limit`).
//
// For memory limits above the no-pressure threshold, `std::lerp` linearly
// extrapolates along the slope between moderate and no-pressure thresholds to
// allow additional awake instances when abundant memory is available.
size_t CalculateAwakeInstancesLimit(size_t default_limit,
                                    base::MemoryLimit memory_limit);

}  // namespace glic

#endif  // CHROME_BROWSER_GLIC_SERVICE_GLIC_INSTANCE_LIMIT_CALCULATOR_H_
