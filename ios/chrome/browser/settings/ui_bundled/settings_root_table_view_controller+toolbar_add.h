// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Toolbar add button category for settings root table view controller
// summary: Category header adding a method to build the Add toolbar button for settings root table view controllers.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_SETTINGS_ROOT_TABLE_VIEW_CONTROLLER_TOOLBAR_ADD_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_SETTINGS_ROOT_TABLE_VIEW_CONTROLLER_TOOLBAR_ADD_H_

#import "ios/chrome/browser/settings/ui_bundled/settings_root_table_view_controller.h"

// This category adds a method to SettingsRootTableViewController to create
// an Add button for the toolbar.
@interface SettingsRootTableViewController (ToolbarAdd)

// Builds and returns an Add button for the toolbar.
- (UIBarButtonItem*)addButtonWithAction:(SEL)action;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_SETTINGS_ROOT_TABLE_VIEW_CONTROLLER_TOOLBAR_ADD_H_
