// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock welcome tour controller observer
// summary: Provides a gmock implementation of the WelcomeTourControllerObserver used to verify tour events in tests.
// ---

#include "ash/user_education/welcome_tour/mock_welcome_tour_controller_observer.h"

namespace ash {

MockWelcomeTourControllerObserver::MockWelcomeTourControllerObserver() =
    default;

MockWelcomeTourControllerObserver::~MockWelcomeTourControllerObserver() =
    default;

}  // namespace ash
