// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped idle state override implementation
// summary: Implements ScopedSetIdleState, an RAII helper that overrides the idle state for testing and restores the previous state on destruction.
// ---

#include "ui/base/idle/scoped_set_idle_state.h"

#include "ui/base/idle/idle_internal.h"

namespace ui {

ScopedSetIdleState::ScopedSetIdleState(IdleState state)
    : previous_state_(IdleStateForTesting()) {
  IdleStateForTesting() = state;
}

ScopedSetIdleState::~ScopedSetIdleState() {
  IdleStateForTesting() = previous_state_;
}

}  // namespace ui
