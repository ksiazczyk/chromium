// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page Action View Utility Header
// summary: Declares a page_actions helper that maps an optional action ID to the matching side panel open trigger for page action views.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_PAGE_ACTION_PAGE_ACTION_VIEW_UTIL_H_
#define CHROME_BROWSER_UI_VIEWS_PAGE_ACTION_PAGE_ACTION_VIEW_UTIL_H_

#include <optional>

#include "chrome/browser/ui/side_panel/side_panel_enums.h"
#include "ui/actions/action_id.h"

namespace page_actions {

std::optional<SidePanelOpenTrigger> GetSidePanelOpenTriggerForPageAction(
    std::optional<actions::ActionId> action_id);

}  // namespace page_actions

#endif  // CHROME_BROWSER_UI_VIEWS_PAGE_ACTION_PAGE_ACTION_VIEW_UTIL_H_
