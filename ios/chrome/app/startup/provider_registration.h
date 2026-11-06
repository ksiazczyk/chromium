// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ProviderRegistration interface
// summary: Declares ProviderRegistration, which registers all providers and must be called before any Chromium code runs.
// ---

#ifndef IOS_CHROME_APP_STARTUP_PROVIDER_REGISTRATION_H_
#define IOS_CHROME_APP_STARTUP_PROVIDER_REGISTRATION_H_

#import <UIKit/UIKit.h>

@interface ProviderRegistration : NSObject

// Registers all providers. Must be called before any Chromium code is called.
+ (void)registerProviders;
@end
#endif  // IOS_CHROME_APP_STARTUP_PROVIDER_REGISTRATION_H_
