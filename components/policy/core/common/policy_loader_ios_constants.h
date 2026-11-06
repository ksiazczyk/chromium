// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring the iOS managed app configuration defaults key
// summary: Declares the NSUserDefaults key constant that holds the managed app configuration on iOS.
// ---

#ifndef COMPONENTS_POLICY_CORE_COMMON_POLICY_LOADER_IOS_CONSTANTS_H_
#define COMPONENTS_POLICY_CORE_COMMON_POLICY_LOADER_IOS_CONSTANTS_H_

#import <Foundation/Foundation.h>

// Key in NSUserDefaults that contains the managed app configuration.
extern NSString* const kPolicyLoaderIOSConfigurationKey;

#endif  // COMPONENTS_POLICY_CORE_COMMON_POLICY_LOADER_IOS_CONSTANTS_H_
