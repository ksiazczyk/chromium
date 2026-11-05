// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group theme color functions header
// summary: Declares functions that map tab group colors to UI color IDs for tab strip, thumbnail, dialog, saved group, context menu, and bookmark elements.
// ---

#ifndef CHROME_BROWSER_UI_TABS_TAB_GROUP_THEME_H_
#define CHROME_BROWSER_UI_TABS_TAB_GROUP_THEME_H_

#include "components/tab_groups/tab_group_color.h"
#include "ui/color/color_id.h"

ui::ColorId GetTabGroupTabStripColorId(
    tab_groups::TabGroupColorId group_color_id,
    bool active_frame);

ui::ColorId GetThumbnailTabStripTabGroupColorId(
    tab_groups::TabGroupColorId group_color_id,
    bool active_frame);

ui::ColorId GetTabGroupDialogColorId(
    tab_groups::TabGroupColorId group_color_id);

ui::ColorId GetSavedTabGroupForegroundColorId(
    tab_groups::TabGroupColorId group_color_id);

ui::ColorId GetSavedTabGroupOutlineColorId(
    tab_groups::TabGroupColorId group_color_id);

ui::ColorId GetTabGroupContextMenuColorId(
    tab_groups::TabGroupColorId group_color_id);

ui::ColorId GetTabGroupBookmarkColorId(
    tab_groups::TabGroupColorId group_color_id);

#endif  // CHROME_BROWSER_UI_TABS_TAB_GROUP_THEME_H_
