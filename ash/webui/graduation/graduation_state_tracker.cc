// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Graduation state tracker implementation
// summary: Implements the tracker that records the Content Transfer flow state histogram when the app window is closed.
// ---

#include "ash/webui/graduation/graduation_state_tracker.h"

#include "base/metrics/histogram_functions.h"

namespace ash::graduation {

GraduationStateTracker::GraduationStateTracker() = default;

GraduationStateTracker::~GraduationStateTracker() {
  base::UmaHistogramEnumeration(kFlowStateHistogramName, flow_state_,
                                FlowState::kNumStates);
}
}  // namespace ash::graduation
