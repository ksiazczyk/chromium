// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill settings mutator protocol
// summary: Declares the AutofillSettingsMutator protocol for notifying changes to enhanced autofill and user verification settings.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_AUTOFILL_SETTINGS_MUTATOR_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_AUTOFILL_SETTINGS_MUTATOR_H_

#import <Foundation/Foundation.h>

// Mutator protocol for the Autofill settings page.
@protocol AutofillSettingsMutator <NSObject>

// Sets whether Enhanced Autofill is enabled.
- (void)setEnhancedAutofillEnabled:(BOOL)enabled;

// Sets whether user verification is enabled before filling sensitive data.
- (void)setUserVerificationEnabled:(BOOL)enabled;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_AUTOFILL_SETTINGS_MUTATOR_H_
