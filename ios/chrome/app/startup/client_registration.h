// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClientRegistration interface
// summary: Declares ClientRegistration, which registers all clients and must be called before any web code runs.
// ---

#ifndef IOS_CHROME_APP_STARTUP_CLIENT_REGISTRATION_H_
#define IOS_CHROME_APP_STARTUP_CLIENT_REGISTRATION_H_

#import <UIKit/UIKit.h>

@interface ClientRegistration : NSObject

// Registers all clients.  Must be called before any web code is called.
+ (void)registerClients;

@end
#endif  // IOS_CHROME_APP_STARTUP_CLIENT_REGISTRATION_H_
