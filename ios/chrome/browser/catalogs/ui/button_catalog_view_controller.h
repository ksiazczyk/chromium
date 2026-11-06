// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Button catalog view controller header
// summary: Declares ButtonCatalogViewController, a settings root controller that presents the button catalog.
// ---

#ifndef IOS_CHROME_BROWSER_CATALOGS_UI_BUTTON_CATALOG_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_CATALOGS_UI_BUTTON_CATALOG_VIEW_CONTROLLER_H_

#import "ios/chrome/browser/settings/ui_bundled/settings_root_table_view_controller.h"

// View controller for the button catalog.
@interface ButtonCatalogViewController : SettingsRootTableViewController

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithStyle:(UITableViewStyle)style NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_CATALOGS_UI_BUTTON_CATALOG_VIEW_CONTROLLER_H_
