// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Inactive window mouse event controller implementation
// summary: Implements a counter-based controller and scoped helper that decide whether mouse events are accepted while the window is inactive.
// ---

#include "chrome/browser/ui/tabs/inactive_window_mouse_event_controller.h"

#include "base/memory/weak_ptr.h"
#include "chrome/browser/ui/tabs/public/tab_features.h"

namespace tabs {

InactiveWindowMouseEventController::InactiveWindowMouseEventController() =
    default;
InactiveWindowMouseEventController::~InactiveWindowMouseEventController() =
    default;

ScopedAcceptMouseEventsWhileWindowInactive::
    ScopedAcceptMouseEventsWhileWindowInactive(
        base::WeakPtr<InactiveWindowMouseEventController> controller)
    : controller_(controller) {
  if (controller_) {
    controller_->Increment(InactiveWindowMouseEventController::PassKey{});
  }
}

ScopedAcceptMouseEventsWhileWindowInactive::
    ~ScopedAcceptMouseEventsWhileWindowInactive() {
  if (controller_) {
    controller_->Decrement(InactiveWindowMouseEventController::PassKey{});
  }
}

bool InactiveWindowMouseEventController::
    ShouldAcceptMouseEventsWhileWindowInactive() const {
  return accept_input_counter_ > 0;
}

std::unique_ptr<ScopedAcceptMouseEventsWhileWindowInactive>
InactiveWindowMouseEventController::AcceptMouseEventsWhileWindowInactive() {
  return std::make_unique<ScopedAcceptMouseEventsWhileWindowInactive>(
      GetWeakPtr());
}

void InactiveWindowMouseEventController::Increment(PassKey key) {
  ++accept_input_counter_;
}

void InactiveWindowMouseEventController::Decrement(PassKey key) {
  --accept_input_counter_;
}

}  // namespace tabs
