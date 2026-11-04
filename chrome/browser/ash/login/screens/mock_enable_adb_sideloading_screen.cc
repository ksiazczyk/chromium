// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock enable ADB sideloading screen implementation
// summary: Implements the mock enable ADB sideloading screen and view, including the exit screen helper for tests.
// ---

#include "chrome/browser/ash/login/screens/mock_enable_adb_sideloading_screen.h"
#include "base/memory/weak_ptr.h"

namespace ash {

using ::testing::_;
using ::testing::AtLeast;

MockEnableAdbSideloadingScreen::MockEnableAdbSideloadingScreen(
    PrefService* local_state,
    base::WeakPtr<EnableAdbSideloadingScreenView> view,
    const base::RepeatingClosure& exit_callback)
    : EnableAdbSideloadingScreen(local_state, std::move(view), exit_callback) {}

MockEnableAdbSideloadingScreen::~MockEnableAdbSideloadingScreen() = default;

void MockEnableAdbSideloadingScreen::ExitScreen() {
  exit_callback()->Run();
}

MockEnableAdbSideloadingScreenView::MockEnableAdbSideloadingScreenView() =
    default;

MockEnableAdbSideloadingScreenView::~MockEnableAdbSideloadingScreenView() =
    default;

}  // namespace ash
