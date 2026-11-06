// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IntentDonationHelper interface
// summary: Declares the IntentDonationHelper class with a method to donate an INInteraction for a given IntentType to IntentKit.
// ---

#ifndef IOS_CHROME_BROWSER_INTENTS_MODEL_INTENTS_DONATION_HELPER_H_
#define IOS_CHROME_BROWSER_INTENTS_MODEL_INTENTS_DONATION_HELPER_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/intents/model/intent_type.h"

/// Set of utils for donating INInteractions matching INIntents.
@interface IntentDonationHelper : NSObject

/// Donate the intent of given type to IntentKit.
+ (void)donateIntent:(IntentType)intentType;

@end

#endif  // IOS_CHROME_BROWSER_INTENTS_MODEL_INTENTS_DONATION_HELPER_H_
