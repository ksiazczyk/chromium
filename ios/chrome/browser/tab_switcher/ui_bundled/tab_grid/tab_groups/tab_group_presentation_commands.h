// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group presentation commands protocol
// summary: Declares commands for actions within the tab group view, such as showing the ShareKit share or manage flow.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_PRESENTATION_COMMANDS_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_PRESENTATION_COMMANDS_H_

// Commands related to actions within the tab group view.
@protocol TabGroupPresentationCommands

// Method invoked when the facePile button is tapped.
// Shows whether the share or manage flow from ShareKit, based on the
// collaboration ID of the current group.
- (void)showShareKitFlow;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_PRESENTATION_COMMANDS_H_
