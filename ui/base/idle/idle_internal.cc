// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Idle state test override storage
// summary: Stores an optional idle state that tests can set to override the actual system idle state.
// ---

#include "ui/base/idle/idle_internal.h"

namespace ui {

std::optional<IdleState>& IdleStateForTesting() {
  static std::optional<IdleState> idle_state;
  return idle_state;
}

}  // namespace ui
