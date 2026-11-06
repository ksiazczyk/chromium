// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Memory pressure evaluator adjuster default implementation
// summary: Provides empty default implementations of the adjuster methods for relaxing and restoring memory pressure thresholds.
// ---

#include "chromecast/browser/cast_system_memory_pressure_evaluator_adjuster.h"

namespace chromecast {

void CastSystemMemoryPressureEvaluatorAdjuster::
    ConfigRelaxMemoryPressureThresholds(
        float relaxed_critical_memory_fraction,
        float relaxed_moderate_memory_fraction) {}

void CastSystemMemoryPressureEvaluatorAdjuster::RelaxMemoryPressureThresholds(
    std::string requesting_app_session_id) {}

void CastSystemMemoryPressureEvaluatorAdjuster::RestoreMemoryPressureThresholds(
    const std::string& requesting_app_session_id) {}

}  // namespace chromecast