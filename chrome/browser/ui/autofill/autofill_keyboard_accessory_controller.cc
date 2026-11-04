// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill keyboard accessory controller defaults
// summary: Implements the default constructors, assignment operators and destructor of the keyboard accessory removal confirmation text struct.
// ---

#include "chrome/browser/ui/autofill/autofill_keyboard_accessory_controller.h"

namespace autofill {

AutofillKeyboardAccessoryController::RemovalConfirmationText::
    RemovalConfirmationText() = default;
AutofillKeyboardAccessoryController::RemovalConfirmationText::
    RemovalConfirmationText(const RemovalConfirmationText&) = default;
AutofillKeyboardAccessoryController::RemovalConfirmationText&
AutofillKeyboardAccessoryController::RemovalConfirmationText::operator=(
    const RemovalConfirmationText&) = default;
AutofillKeyboardAccessoryController::RemovalConfirmationText::
    RemovalConfirmationText(RemovalConfirmationText&&) = default;
AutofillKeyboardAccessoryController::RemovalConfirmationText&
AutofillKeyboardAccessoryController::RemovalConfirmationText::operator=(
    RemovalConfirmationText&&) = default;
AutofillKeyboardAccessoryController::RemovalConfirmationText::
    ~RemovalConfirmationText() = default;

}  // namespace autofill
