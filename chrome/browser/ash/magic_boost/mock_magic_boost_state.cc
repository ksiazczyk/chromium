// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Magic Boost state mock implementation
// summary: Implements MockMagicBoostState, a test double of MagicBoostState that injects a null active profile.
// ---

#include "chrome/browser/ash/magic_boost/mock_magic_boost_state.h"

#include "base/functional/bind.h"
#include "chrome/browser/ash/magic_boost/magic_boost_state.h"

namespace ash {

MockMagicBoostState::MockMagicBoostState()
    : MagicBoostState(base::BindRepeating(
          []() { return static_cast<Profile*>(nullptr); })) {}

MockMagicBoostState::~MockMagicBoostState() = default;

}  // namespace ash
