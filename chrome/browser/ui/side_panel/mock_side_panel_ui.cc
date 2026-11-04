// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockSidePanelUI implementation
// summary: Implements the MockSidePanelUI test double that registers itself as unowned user data for side panel tests.
// ---

#include "chrome/browser/ui/side_panel/mock_side_panel_ui.h"

MockSidePanelUI::MockSidePanelUI(ui::UnownedUserDataHost& host)
    : scoped_unowned_user_data_(host, *this) {}

MockSidePanelUI::~MockSidePanelUI() = default;
