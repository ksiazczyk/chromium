// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock update screen implementation
// summary: Implements the mock OS update screen and view, running the real exit path while recording calls for update screen tests.
// ---

#include "chrome/browser/ash/login/screens/mock_update_screen.h"

namespace ash {

using ::testing::AtLeast;
using ::testing::_;

MockUpdateScreen::MockUpdateScreen(
    PrefService* local_state,
    base::WeakPtr<UpdateView> view,
    ErrorScreen* error_screen,
    const UpdateScreen::ScreenExitCallback& exit_callback)
    : UpdateScreen(local_state, std::move(view), error_screen, exit_callback) {}

MockUpdateScreen::~MockUpdateScreen() = default;

void MockUpdateScreen::RunExit(UpdateScreen::Result result) {
  ExitUpdate(result);
}

MockUpdateView::MockUpdateView() = default;

MockUpdateView::~MockUpdateView() = default;

}  // namespace ash
