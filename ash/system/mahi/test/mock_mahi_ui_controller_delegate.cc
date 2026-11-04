// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Mahi UI controller delegate implementation
// summary: Implements the constructor and destructor of the MockMahiUiControllerDelegate test double attached to a MahiUiController.
// relations:
//   - implements /ash/system/mahi/test/mock_mahi_ui_controller_delegate.h
// ---

#include "ash/system/mahi/test/mock_mahi_ui_controller_delegate.h"

namespace ash {

MockMahiUiControllerDelegate::MockMahiUiControllerDelegate(
    MahiUiController* ui_controller)
    : MahiUiController::Delegate(ui_controller) {}

MockMahiUiControllerDelegate::~MockMahiUiControllerDelegate() = default;

}  // namespace ash
