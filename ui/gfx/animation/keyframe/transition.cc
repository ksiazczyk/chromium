// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Transition implementation
// summary: Implements Transition constructors and destructor, defaulting the transition duration to 225 milliseconds.
// ---

#include "ui/gfx/animation/keyframe/transition.h"

namespace gfx {

namespace {
static constexpr int kDefaultTransitionDurationMs = 225;
}  // namespace

Transition::Transition()
    : duration(base::Milliseconds(kDefaultTransitionDurationMs)) {}

Transition::Transition(const Transition&) = default;
Transition::Transition(Transition&&) = default;
Transition::~Transition() = default;

}  // namespace gfx
