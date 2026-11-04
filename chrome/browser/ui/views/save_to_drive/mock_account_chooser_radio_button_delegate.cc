// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock account chooser radio button delegate
// summary: Provides a gmock implementation of the radio button delegate for use in account chooser tests.
// ---

#include "chrome/browser/ui/views/save_to_drive/mock_account_chooser_radio_button_delegate.h"

namespace save_to_drive {
MockAccountChooserRadioButtonDelegate::MockAccountChooserRadioButtonDelegate() =
    default;

MockAccountChooserRadioButtonDelegate::
    ~MockAccountChooserRadioButtonDelegate() = default;
}  // namespace save_to_drive
