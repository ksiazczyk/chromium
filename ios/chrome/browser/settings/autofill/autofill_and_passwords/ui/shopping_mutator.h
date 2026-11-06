// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shopping settings mutator protocol
// summary: Declares the mutator protocol for the Shopping settings page, notifying when the user toggles the shopping switch.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_SHOPPING_MUTATOR_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_SHOPPING_MUTATOR_H_

#import "ios/chrome/browser/settings/autofill/autofill_and_passwords/ui/autofill_ai_base_mutator.h"

// Mutator protocol for Shopping settings.
@protocol ShoppingMutator <AutofillAIBaseMutator>

// Called when the user toggles the shopping toggle.
- (void)didToggleShopping:(BOOL)enabled;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_SHOPPING_MUTATOR_H_
