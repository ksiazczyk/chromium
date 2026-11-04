// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Consumer session metrics delegate for ambient mode
// summary: Declares the delegate class that records init, startup, and engagement metrics for non-enterprise ambient sessions via AmbientSessionMetricsRecorder::Delegate.
// relations:
//   - depends_on /ash/ambient/ambient_ui_settings.h
//   - implements /ash/ambient/metrics/ambient_session_metrics_recorder.h
//   - depends_on /ash/ash_export.h
// ---

#ifndef ASH_AMBIENT_METRICS_AMBIENT_CONSUMER_SESSION_METRICS_DELEGATE_H_
#define ASH_AMBIENT_METRICS_AMBIENT_CONSUMER_SESSION_METRICS_DELEGATE_H_

#include "ash/ambient/ambient_ui_settings.h"
#include "ash/ambient/metrics/ambient_session_metrics_recorder.h"
#include "ash/ash_export.h"
#include "base/time/time.h"

namespace ash {

// For all non-enterprise ambient sessions (the primary use case).
class ASH_EXPORT AmbientConsumerSessionMetricsDelegate
    : public AmbientSessionMetricsRecorder::Delegate {
 public:
  explicit AmbientConsumerSessionMetricsDelegate(AmbientUiSettings ui_settings);
  AmbientConsumerSessionMetricsDelegate(
      const AmbientConsumerSessionMetricsDelegate&) = delete;
  AmbientConsumerSessionMetricsDelegate& operator=(
      const AmbientConsumerSessionMetricsDelegate&) = delete;
  ~AmbientConsumerSessionMetricsDelegate() override;

  // AmbientSessionMetricsRecorder::Delegate:
  void RecordInitStatus(bool success) override;
  void RecordStartupTime(base::TimeDelta startup_time) override;
  void RecordEngagementTime(base::TimeDelta engagement_time) override;

 private:
  const AmbientUiSettings ui_settings_;
};

}  // namespace ash

#endif  // ASH_AMBIENT_METRICS_AMBIENT_CONSUMER_SESSION_METRICS_DELEGATE_H_
