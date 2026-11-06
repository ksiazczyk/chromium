// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini zero-state mutator protocol
// summary: Protocol for actions triggered in the zero-state view controller, such as selecting a suggestion chip, closing the view, or fetching the user's first name.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_ZERO_STATE_SUGGESTIONS_UI_GEMINI_ZERO_STATE_MUTATOR_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_ZERO_STATE_SUGGESTIONS_UI_GEMINI_ZERO_STATE_MUTATOR_H_

#import <Foundation/Foundation.h>

@class GeminiZeroStateViewController;
@class ZeroStateSuggestion;

// Mutator protocol for actions triggered within the
// GeminiZeroStateViewController.
@protocol GeminiZeroStateMutator <NSObject>

// Called when the user taps on a zero-state suggestion chip.
- (void)geminiZeroStateViewController:
            (GeminiZeroStateViewController*)viewController
                  didSelectSuggestion:(ZeroStateSuggestion*)suggestion;

// Called when the user taps the close button in the zero-state view.
- (void)didTapZeroStateCloseButton;

// Returns the first name of the primary identity, used to personalize the
// greeting. Returns nil when there is no signed-in user.
- (NSString*)userFirstName;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_ZERO_STATE_SUGGESTIONS_UI_GEMINI_ZERO_STATE_MUTATOR_H_
