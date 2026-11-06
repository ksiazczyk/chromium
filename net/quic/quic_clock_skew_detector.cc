// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: QuicClockSkewDetector implementation
// summary: Implements detection of clock skew by comparing wall-clock and time-tick deltas for QUIC connections.
// ---

#include "net/quic/quic_clock_skew_detector.h"

namespace net {

QuicClockSkewDetector::QuicClockSkewDetector(base::TimeTicks ticks_time,
                                             base::Time wall_time)
    : last_ticks_time_(ticks_time), last_wall_time_(wall_time) {}

bool QuicClockSkewDetector::ClockSkewDetected(base::TimeTicks ticks_now,
                                              base::Time wall_now) {
  base::TimeDelta ticks_delta = ticks_now - last_ticks_time_;
  base::TimeDelta wall_delta = wall_now - last_wall_time_;
  base::TimeDelta offset = wall_delta - ticks_delta;
  last_wall_time_ = wall_now;
  last_ticks_time_ = ticks_now;

  if (offset < base::Seconds(1))
    return false;

  return true;
}

}  // namespace net
