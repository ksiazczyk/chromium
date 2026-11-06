// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tabs settings navigation commands protocol
// summary: Declares navigation commands for the tabs settings, such as showing the inactive tabs settings screen.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_TABS_TABS_SETTINGS_NAVIGATION_COMMANDS_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_TABS_TABS_SETTINGS_NAVIGATION_COMMANDS_H_

// Commands related to tabs inside the tabs settings.
@protocol TabsSettingsNavigationCommands

// Shows inactive tabs settings screen.
- (void)showInactiveTabsSettings;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_TABS_TABS_SETTINGS_NAVIGATION_COMMANDS_H_
