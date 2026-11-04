// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock immersive mode controller implementation
// summary: Implements MockImmersiveModeController, a gmock-based stand-in for ImmersiveModeController that notifies observers when it is destroyed.
// ---

#include "chrome/browser/ui/views/frame/mock_immersive_mode_controller.h"

MockImmersiveModeController::MockImmersiveModeController(
    ui::UnownedUserDataHost& host)
    : ImmersiveModeController(host) {}

MockImmersiveModeController::~MockImmersiveModeController() {
  for (auto& observer : observers_) {
    observer.OnImmersiveModeControllerDestroyed();
  }
}
