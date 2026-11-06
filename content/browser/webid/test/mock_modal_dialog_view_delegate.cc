// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock modal dialog view delegate implementation
// summary: Provides the default constructor and destructor for MockModalDialogViewDelegate, a GMock test double for the IdentityRegistryDelegate interface.
// ---

#include "content/browser/webid/test/mock_modal_dialog_view_delegate.h"

namespace content::webid {

MockModalDialogViewDelegate::MockModalDialogViewDelegate() = default;

MockModalDialogViewDelegate::~MockModalDialogViewDelegate() = default;

}  // namespace content::webid
