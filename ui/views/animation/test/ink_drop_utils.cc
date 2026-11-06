// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ink drop state and reason printing helpers for tests
// summary: Implements gtest PrintTo overloads for ink drop states, highlight animation types and animation ended reasons.
// ---

#include <ostream>

#include "ui/views/animation/ink_drop_animation_ended_reason.h"
#include "ui/views/animation/ink_drop_highlight.h"
#include "ui/views/animation/ink_drop_state.h"

namespace views {

void PrintTo(InkDropState ink_drop_state, ::std::ostream* os) {
  *os << ToString(ink_drop_state);
}

void PrintTo(InkDropHighlight::AnimationType animation_type,
             ::std::ostream* os) {
  *os << ToString(animation_type);
}

void PrintTo(InkDropAnimationEndedReason reason, ::std::ostream* os) {
  *os << ToString(reason);
}

}  // namespace views
