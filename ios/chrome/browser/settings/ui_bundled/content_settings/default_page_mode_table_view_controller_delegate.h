// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default page mode table view controller delegate protocol
// summary: Declares the delegate protocol notified when the user selects a default page mode in the settings screen.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_TABLE_VIEW_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_TABLE_VIEW_CONTROLLER_DELEGATE_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/settings/ui_bundled/content_settings/default_page_mode.h"

// Delegate for the  screen allowing the user to choose the default mode
// (Desktop/Mobile) for loading pages.
@protocol DefaultPageModeTableViewControllerDelegate

// Called when the user chose a default page mode.
- (void)didSelectMode:(DefaultPageMode)selectedMode;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_TABLE_VIEW_CONTROLLER_DELEGATE_H_
