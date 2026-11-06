// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Grid toolbars configuration provider protocol
// summary: Objective-C protocol that exposes a method for retrieving the tab grid's toolbars configuration.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_GRID_TOOLBARS_CONFIGURATION_PROVIDER_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_GRID_TOOLBARS_CONFIGURATION_PROVIDER_H_

@class TabGridToolbarsConfiguration;

// Provider to get toolbars configuration from grid.
@protocol GridToolbarsConfigurationProvider <NSObject>

// Gets the toolbars configuration.
- (TabGridToolbarsConfiguration*)toolbarsConfiguration;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_GRID_TOOLBARS_CONFIGURATION_PROVIDER_H_
