// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Navigation debug scenario capture implementation
// summary: Implements CaptureTraceForNavigationDebugScenario, which logs a debug scenario and records it in the Stability.DebugScenario.Navigation UMA histogram.
// ---

#include "content/common/debug_utils.h"

#include "base/logging.h"
#include "base/metrics/histogram_macros.h"
#include "base/numerics/safe_conversions.h"

namespace content {

void CaptureTraceForNavigationDebugScenario(DebugScenario scenario) {
  LOG(ERROR) << "Hit debug scenario: " << base::strict_cast<int>(scenario);
  UMA_HISTOGRAM_ENUMERATION("Stability.DebugScenario.Navigation", scenario);
}

}  // namespace content
