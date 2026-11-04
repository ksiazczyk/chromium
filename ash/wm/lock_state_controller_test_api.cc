// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lock state controller test API implementation
// summary: Implements the test API helper that wraps a LockStateController so tests can access its internal state.
// ---

#include "ash/wm/lock_state_controller_test_api.h"

namespace ash {

LockStateControllerTestApi::LockStateControllerTestApi(
    LockStateController* controller)
    : controller_(controller) {
  DCHECK(controller);
}

LockStateControllerTestApi::~LockStateControllerTestApi() = default;

}  // namespace ash
