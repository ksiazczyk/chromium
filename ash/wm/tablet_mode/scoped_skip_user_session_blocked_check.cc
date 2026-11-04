// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped skip user session blocked check implementation
// summary: Implements a scoped helper that temporarily skips user session blocked checks in the Ash event client.
// ---

#include "ash/wm/tablet_mode/scoped_skip_user_session_blocked_check.h"

#include "ash/shell.h"
#include "ash/wm/event_client_impl.h"

namespace ash {

ScopedSkipUserSessionBlockedCheck::ScopedSkipUserSessionBlockedCheck() {
  if (Shell::Get()->event_client())
    Shell::Get()->event_client()->set_skip_user_session_blocked_check(true);
}

ScopedSkipUserSessionBlockedCheck::~ScopedSkipUserSessionBlockedCheck() {
  if (Shell::Get()->event_client())
    Shell::Get()->event_client()->set_skip_user_session_blocked_check(false);
}

}  // namespace ash
