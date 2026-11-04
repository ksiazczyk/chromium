// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock demo preferences screen implementation
// summary: Implements the mock demo preferences screen and view, providing constructors and an exit callback helper for tests.
// ---

#include "chrome/browser/ash/login/screens/mock_demo_preferences_screen.h"
#include "base/memory/weak_ptr.h"

namespace ash {

MockDemoPreferencesScreen::MockDemoPreferencesScreen(
    PrefService* local_state,
    base::WeakPtr<DemoPreferencesScreenView> view,
    const ScreenExitCallback& exit_callback)
    : DemoPreferencesScreen(local_state, std::move(view), exit_callback) {}

MockDemoPreferencesScreen::~MockDemoPreferencesScreen() = default;

void MockDemoPreferencesScreen::ExitScreen(Result result) {
  exit_callback()->Run(result);
}

MockDemoPreferencesScreenView::MockDemoPreferencesScreenView() = default;

MockDemoPreferencesScreenView::~MockDemoPreferencesScreenView() = default;

}  // namespace ash
