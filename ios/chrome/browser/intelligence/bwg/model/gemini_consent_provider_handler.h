// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini consent provider handler interface
// summary: Declares a handler class implementing the Gemini consent provider delegate, backed by a PrefService and disconnectable for cleanup.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CONSENT_PROVIDER_HANDLER_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CONSENT_PROVIDER_HANDLER_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/intelligence/bwg/model/gemini_consent_provider_delegate.h"

class PrefService;

// Handler for Gemini consent provider actions.
@interface GeminiConsentProviderHandler
    : NSObject <GeminiConsentProviderDelegate>

- (instancetype)initWithPrefService:(PrefService*)prefService
    NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

// Disconnects the handler from the PrefService and stops observing.
- (void)disconnect;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CONSENT_PROVIDER_HANDLER_H_
