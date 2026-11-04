// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock handoff button controller implementation
// summary: Provides the constructor and destructor for MockHandoffButtonController, which delegates to the real HandoffButtonController base.
// ---

#include "chrome/browser/actor/ui/test_support/mock_handoff_button_controller.h"

namespace actor::ui {

MockHandoffButtonController::MockHandoffButtonController(
    views::View* anchor_view,
    ActorUiWindowController* window_controller)
    : HandoffButtonController(anchor_view, window_controller) {}
MockHandoffButtonController::~MockHandoffButtonController() = default;

}  // namespace actor::ui
