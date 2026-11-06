// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill AI save entity mutator protocol
// summary: Declares the mutator protocol the UI uses to accept, cancel, or dismiss saving of a new entity via the mediator.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_UI_AUTOFILL_AI_SAVE_ENTITY_MUTATOR_H_
#define IOS_CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_UI_AUTOFILL_AI_SAVE_ENTITY_MUTATOR_H_

#import <Foundation/Foundation.h>

// Mutator protocol for the UI layer to communicate to the
// AutofillAISaveEntityMediator.
@protocol AutofillAISaveEntityMutator <NSObject>

// Accepts saving of the new entity.
- (void)acceptSaving;

// Cancels saving of the new entity.
- (void)cancelSaving;

// Dismisses saving of the new entity. Currently, dismissing is considered as
// cancelling.
- (void)dismissSaving;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_UI_AUTOFILL_AI_SAVE_ENTITY_MUTATOR_H_
