// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Empty lock screen controller implementation
// summary: Implements a no-op lock screen controller that runs pending callbacks immediately and reports the screen as unlocked with no notifications allowed.
// ---

#include "ui/message_center/lock_screen/empty_lock_screen_controller.h"

namespace message_center {

void EmptyLockScreenController::DismissLockScreenThenExecute(
    base::OnceClosure pending_callback,
    base::OnceClosure cancel_callback,
    int message_id) {
  std::move(pending_callback).Run();
}

bool EmptyLockScreenController::IsScreenLocked() const {
  return false;
}

bool EmptyLockScreenController::IsNotificationAllowedOnLockScreen(
    const std::string& id) const {
  return false;
}

}  // namespace message_center
