// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestIdleProvider fake idle provider implementation
// summary: Implements a fake IdleTimeProvider that reports configurable idle time and lock state so tests can control idle state calculations.
// ---

#include "extensions/browser/api/idle/test_idle_provider.h"

namespace extensions {

TestIdleProvider::TestIdleProvider() = default;
TestIdleProvider::~TestIdleProvider() = default;

ui::IdleState TestIdleProvider::CalculateIdleState(int idle_threshold) {
  if (locked_) {
    return ui::IDLE_STATE_LOCKED;
  } else if (idle_time_ >= idle_threshold) {
    return ui::IDLE_STATE_IDLE;
  } else {
    return ui::IDLE_STATE_ACTIVE;
  }
}

int TestIdleProvider::CalculateIdleTime() {
  return idle_time_;
}

bool TestIdleProvider::CheckIdleStateIsLocked() {
  return locked_;
}

}  // namespace extensions
