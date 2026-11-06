// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab grid consumer protocol
// summary: Declares a protocol the mediator uses to update the tab grid UI, such as mode and parental controls.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_CONSUMER_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_CONSUMER_H_

#import <Foundation/Foundation.h>

enum class TabGridMode;

// Allows the tab grid mediator to reflect change in the UI layer.
@protocol TabGridConsumer <NSObject>

// Updates the state of parental controls.
- (void)updateParentalControlStatus:(BOOL)isSubjectToParentalControls;

// Updates the tab grid for supervised users.
- (void)updateTabGridForIncognitoModeDisabled:(BOOL)isIncognitoModeDisabled;

// Sets the mode of the Tab Grid.
- (void)setMode:(TabGridMode)mode;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_CONSUMER_H_
