// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini zero-state view controller header
// summary: Declares the view controller for the zero-state UI, which conforms to the consumer protocol and holds a weak mutator reference.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_ZERO_STATE_SUGGESTIONS_UI_GEMINI_ZERO_STATE_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_ZERO_STATE_SUGGESTIONS_UI_GEMINI_ZERO_STATE_VIEW_CONTROLLER_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/intelligence/zero_state_suggestions/ui/gemini_zero_state_consumer.h"

@protocol GeminiZeroStateMutator;

// View controller for the zero-state UI.
@interface GeminiZeroStateViewController
    : UIViewController <GeminiZeroStateConsumer>

// The mutator handling user interaction with suggestion chips.
@property(nonatomic, weak) id<GeminiZeroStateMutator> mutator;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_ZERO_STATE_SUGGESTIONS_UI_GEMINI_ZERO_STATE_VIEW_CONTROLLER_H_
