// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Scoped extended updates controller implementation
// summary: Replaces the global ExtendedUpdatesController instance with a given controller on construction and restores the original on destruction.
// ---

#include "chrome/browser/ash/extended_updates/test/scoped_extended_updates_controller.h"

namespace ash {

ScopedExtendedUpdatesController::ScopedExtendedUpdatesController(
    ExtendedUpdatesController* controller) {
  original_controller_ =
      ExtendedUpdatesController::SetInstanceForTesting(controller);
}

ScopedExtendedUpdatesController::~ScopedExtendedUpdatesController() {
  ExtendedUpdatesController::SetInstanceForTesting(original_controller_);
}

}  // namespace ash
