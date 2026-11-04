// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Night Light metrics recorder header
// summary: Declares the NightLightMetricsRecorder class, a SessionObserver that records Night Light metrics when the first session starts.
// ---

#ifndef ASH_SYSTEM_NIGHT_LIGHT_NIGHT_LIGHT_METRICS_RECORDER_H_
#define ASH_SYSTEM_NIGHT_LIGHT_NIGHT_LIGHT_METRICS_RECORDER_H_

#include "ash/public/cpp/session/session_observer.h"

namespace ash {

// This class is used to record Night Light metrics.
class NightLightMetricsRecorder : public SessionObserver {
 public:
  NightLightMetricsRecorder();
  NightLightMetricsRecorder(const NightLightMetricsRecorder&) = delete;
  NightLightMetricsRecorder& operator=(const NightLightMetricsRecorder&) =
      delete;
  ~NightLightMetricsRecorder() override;

  // SessionObserver:
  void OnFirstSessionStarted() override;
};

}  // namespace ash

#endif  // ASH_SYSTEM_NIGHT_LIGHT_NIGHT_LIGHT_METRICS_RECORDER_H_
