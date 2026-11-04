// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Timer-based sampling event source implementation
// summary: Implements a timer-driven sampling event source that starts a repeating timer to invoke the sampling callback at a fixed interval.
// ---

#include "base/power_monitor/timer_sampling_event_source.h"

#include "base/check.h"

namespace base {

TimerSamplingEventSource::TimerSamplingEventSource(TimeDelta interval)
    : interval_(interval) {}

TimerSamplingEventSource::~TimerSamplingEventSource() = default;

bool TimerSamplingEventSource::Start(SamplingEventCallback callback) {
  DCHECK(callback);
  timer_.Start(FROM_HERE, interval_, std::move(callback));
  return true;
}

TimeDelta TimerSamplingEventSource::GetSampleInterval() {
  return interval_;
}

}  // namespace base
