// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lobster metrics recorder header
// summary: Declares functions for recording Lobster state and blocked-reason metrics.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/public/cpp/lobster/lobster_enums.h
//   - depends_on /ash/public/cpp/lobster/lobster_metrics_state_enums.h
// ---

#ifndef ASH_LOBSTER_LOBSTER_METRICS_RECORDER_H_
#define ASH_LOBSTER_LOBSTER_METRICS_RECORDER_H_

#include "ash/ash_export.h"
#include "ash/public/cpp/lobster/lobster_enums.h"
#include "ash/public/cpp/lobster/lobster_metrics_state_enums.h"

namespace ash {

void ASH_EXPORT RecordLobsterState(LobsterMetricState state);

void ASH_EXPORT RecordLobsterBlockedReason(LobsterSystemCheck failed_reason);

}  // namespace ash

#endif  // ASH_LOBSTER_LOBSTER_METRICS_RECORDER_H_
