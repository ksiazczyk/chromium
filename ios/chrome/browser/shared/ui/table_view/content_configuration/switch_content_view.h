// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Switch content view header
// summary: Declares SwitchContentView, a leading-aligned view displaying a single switch and conforming to ChromeContentView, with a testing accessor for the switch.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CONTENT_CONFIGURATION_SWITCH_CONTENT_VIEW_H_
#define IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CONTENT_CONFIGURATION_SWITCH_CONTENT_VIEW_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/shared/ui/table_view/content_configuration/chrome_content_view.h"

@class SwitchContentConfiguration;

// A view that displays a single switch, leading-aligned.
@interface SwitchContentView : UIView <ChromeContentView>

// Returns the view, configured with `configuration`.
- (instancetype)initWithConfiguration:
    (SwitchContentConfiguration*)configuration;

// Returns the switch, to be used in testing only.
- (UISwitch*)switchForTesting;

@end

#endif  // IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CONTENT_CONFIGURATION_SWITCH_CONTENT_VIEW_H_
