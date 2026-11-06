// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini page state change handler interface
// summary: Declares GeminiPageStateChangeHandler, which decides whether page context sharing is allowed for Gemini based on a preference and a base view controller.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_PAGE_STATE_CHANGE_HANDLER_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_PAGE_STATE_CHANGE_HANDLER_H_

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "ios/chrome/browser/intelligence/bwg/model/gemini_page_state_change_delegate.h"

class PrefService;

@interface GeminiPageStateChangeHandler
    : NSObject <GeminiPageStateChangeDelegate>

- (instancetype)initWithPrefService:(PrefService*)prefService
    NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

// Sets the base view controller that Gemini is currently presented on.
- (void)setBaseViewController:(UIViewController*)baseViewController;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_PAGE_STATE_CHANGE_HANDLER_H_
