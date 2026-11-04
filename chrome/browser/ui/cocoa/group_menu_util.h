// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Group menu utility header for tab group indicators
// summary: Declares a helper that appends or removes a tab group color indicator on the right side of a Cocoa menu item.
// ---

#ifndef CHROME_BROWSER_UI_COCOA_GROUP_MENU_UTIL_H_
#define CHROME_BROWSER_UI_COCOA_GROUP_MENU_UTIL_H_

#import <AppKit/AppKit.h>

#include "components/tab_groups/tab_group_color.h"

namespace chrome {
// Append a group indicator to the right side of the menu item if
// tab_group_color is set, Otherwise remove the group indicator if any.
void UpdateGroupIndicatorForMenuItem(
    NSMenuItem* item,
    std::optional<tab_groups::TabGroupColorId> tab_group_color_id);
}  // namespace chrome

#endif  // CHROME_BROWSER_UI_COCOA_GROUP_MENU_UTIL_H_
