// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HTTPS-Only Mode error declarations
// summary: Declares the error domain and code for the HTTPS-Only Mode interstitial and a helper that cancels navigation to show that error.
// ---

#ifndef IOS_COMPONENTS_SECURITY_INTERSTITIALS_HTTPS_ONLY_MODE_HTTPS_ONLY_MODE_ERROR_H_
#define IOS_COMPONENTS_SECURITY_INTERSTITIALS_HTTPS_ONLY_MODE_HTTPS_ONLY_MODE_ERROR_H_

#import <Foundation/Foundation.h>

#import "ios/web/public/navigation/web_state_policy_decider.h"

// The error domain for HTTPS-Only mode interstitial.
extern const NSErrorDomain kHttpsOnlyModeErrorDomain;

// Error code for HTTPS-Only mode interstitial.
extern const NSInteger kHttpsOnlyModeErrorCode;

// Creates a PolicyDecision that cancels a navigation to show an HTTPS-Only mode
// error.
web::WebStatePolicyDecider::PolicyDecision CreateHttpsOnlyModeErrorDecision();

#endif  // IOS_COMPONENTS_SECURITY_INTERSTITIALS_HTTPS_ONLY_MODE_HTTPS_ONLY_MODE_ERROR_H_
