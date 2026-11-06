// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Card unmask authentication selection mutator protocol
// summary: Declares the Objective-C mutator protocol notifying about challenge option selection, acceptance and cancellation in card unmask prompts.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_UI_CARD_UNMASK_AUTHENTICATION_SELECTION_MUTATOR_H_
#define IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_UI_CARD_UNMASK_AUTHENTICATION_SELECTION_MUTATOR_H_

@class CardUnmaskChallengeOptionIOS;

@protocol CardUnmaskAuthenticationSelectionMutator <NSObject>

// A challenge option was selected.
- (void)didSelectChallengeOption:(CardUnmaskChallengeOptionIOS*)challengeOption;

// The selection was accepted.
- (void)didAcceptSelection;

// The selection was cancelled.
- (void)didCancelSelection;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_UI_CARD_UNMASK_AUTHENTICATION_SELECTION_MUTATOR_H_
