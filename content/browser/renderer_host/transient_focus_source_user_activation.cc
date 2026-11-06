// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TransientFocusSourceUserActivation implementation
// summary: Implements transient state tracking of user activation for the frame initiating a focus call, used to validate focus crossing fenced frame boundaries.
// ---

#include "content/browser/renderer_host/transient_focus_source_user_activation.h"
#include "third_party/blink/public/common/frame/user_activation_state.h"

namespace content {

TransientFocusSourceUserActivation::TransientFocusSourceUserActivation() =
    default;

void TransientFocusSourceUserActivation::Activate() {
  transient_state_expiry_time_ =
      base::TimeTicks::Now() + blink::kActivationLifespan;
}

void TransientFocusSourceUserActivation::Deactivate() {
  transient_state_expiry_time_ = base::TimeTicks();
}

bool TransientFocusSourceUserActivation::IsActive() const {
  return base::TimeTicks::Now() < transient_state_expiry_time_;
}

}  // namespace content
