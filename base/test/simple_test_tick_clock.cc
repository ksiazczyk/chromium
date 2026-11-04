// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: SimpleTestTickClock implementation
// summary: Implements SimpleTestTickClock, a thread-safe TickClock whose tick time can be advanced or set manually in tests.
// ---

#include "base/test/simple_test_tick_clock.h"

#include "base/check.h"

namespace base {

SimpleTestTickClock::SimpleTestTickClock() = default;

SimpleTestTickClock::~SimpleTestTickClock() = default;

TimeTicks SimpleTestTickClock::NowTicks() const {
  AutoLock lock(lock_);
  return now_ticks_;
}

void SimpleTestTickClock::Advance(TimeDelta delta) {
  AutoLock lock(lock_);
  DCHECK(delta >= TimeDelta());
  now_ticks_ += delta;
}

void SimpleTestTickClock::SetNowTicks(TimeTicks ticks) {
  AutoLock lock(lock_);
  now_ticks_ = ticks;
}

}  // namespace base
