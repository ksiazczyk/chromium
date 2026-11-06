// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScreenProvider public interface header
// summary: Declares the ScreenProvider class whose nextScreenType method returns the type of the next screen until kStepsCompleted is reached.
// ---

#ifndef IOS_CHROME_BROWSER_SCREEN_UI_BUNDLED_SCREEN_PROVIDER_H_
#define IOS_CHROME_BROWSER_SCREEN_UI_BUNDLED_SCREEN_PROVIDER_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/screen/ui_bundled/screen_type.h"

// The class that provides a list of screens.
// TODO(crbug.com/422216784): Rename to include post first-run actions.
@interface ScreenProvider : NSObject

- (instancetype)init NS_UNAVAILABLE;

// Returns the screen type of next screen. This method should stopped being
// called when the screen type is kStepsCompleted.
- (ScreenType)nextScreenType;

@end

#endif  // IOS_CHROME_BROWSER_SCREEN_UI_BUNDLED_SCREEN_PROVIDER_H_
