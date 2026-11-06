// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Throttle test support implementation
// summary: Implements the TestTickClock helper used by extension throttle unit tests to provide a controllable time source.
// ---

#include "extensions/renderer/extension_throttle_test_support.h"

namespace extensions {

TestTickClock::TestTickClock() = default;

TestTickClock::TestTickClock(base::TimeTicks now) : now_ticks_(now) {}

TestTickClock::~TestTickClock() = default;

base::TimeTicks TestTickClock::NowTicks() const {
  return now_ticks_;
}

}  // namespace extensions
