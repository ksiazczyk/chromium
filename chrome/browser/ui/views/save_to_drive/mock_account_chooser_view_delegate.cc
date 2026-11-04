// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock account chooser view delegate
// summary: Provides a gmock implementation of the account chooser view delegate for use in tests.
// ---

#include "chrome/browser/ui/views/save_to_drive/mock_account_chooser_view_delegate.h"

namespace save_to_drive {
MockAccountChooserViewDelegate::MockAccountChooserViewDelegate() = default;
MockAccountChooserViewDelegate::~MockAccountChooserViewDelegate() = default;
}  // namespace save_to_drive
