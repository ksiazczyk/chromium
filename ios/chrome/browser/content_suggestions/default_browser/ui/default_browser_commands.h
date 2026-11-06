// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default Browser commands protocol
// summary: Declares the DefaultBrowserCommands protocol handling events for the Default Browser module, such as taps on the Default Browser promo tile.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_DEFAULT_BROWSER_UI_DEFAULT_BROWSER_COMMANDS_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_DEFAULT_BROWSER_UI_DEFAULT_BROWSER_COMMANDS_H_

#import <UIKit/UIKit.h>

// Command protocol for events for the Default Browser module.
@protocol DefaultBrowserCommands

// Called when the Default Browser tile is tapped.
- (void)didTapDefaultBrowserPromo;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_DEFAULT_BROWSER_UI_DEFAULT_BROWSER_COMMANDS_H_
