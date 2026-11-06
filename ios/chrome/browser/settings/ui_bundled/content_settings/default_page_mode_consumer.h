// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default page mode consumer protocol
// summary: Declares the consumer protocol that receives the currently selected default page mode for display in the settings UI.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_CONSUMER_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_CONSUMER_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/settings/ui_bundled/content_settings/default_page_mode.h"

// Consumer protocol for the screen allowing the user to choose the default mode
// (Desktop/Mobile) for loading pages.
@protocol DefaultPageModeConsumer

// Sets the mode in which pages are loaded by default.
- (void)setDefaultPageMode:(DefaultPageMode)mode;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_CONSUMER_H_
