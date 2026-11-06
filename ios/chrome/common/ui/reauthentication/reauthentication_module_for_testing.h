// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Testing category for the reauthentication module
// summary: Declares a testing category on ReauthenticationModule for injecting mock LAContext objects and overriding the last auth time.
// ---

#ifndef IOS_CHROME_COMMON_UI_REAUTHENTICATION_REAUTHENTICATION_MODULE_FOR_TESTING_H_
#define IOS_CHROME_COMMON_UI_REAUTHENTICATION_REAUTHENTICATION_MODULE_FOR_TESTING_H_

#import <LocalAuthentication/LocalAuthentication.h>

#import "ios/chrome/common/ui/reauthentication/reauthentication_module.h"

@interface ReauthenticationModule (ForTesting)

// Allows the replacement of the `LAContext` objects used by
// `ReauthenticationModule` with a mock to facilitate testing.
- (void)setCreateLAContext:(LAContext* (^)(void))createLAContext;

// Allows overriding the last authentication date.
- (void)setLastSuccessfulReauthTime:(base::Time)time;

@end

#endif  // IOS_CHROME_COMMON_UI_REAUTHENTICATION_REAUTHENTICATION_MODULE_FOR_TESTING_H_
