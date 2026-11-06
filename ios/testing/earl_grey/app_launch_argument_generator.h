// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for app launch argument generation
// summary: Declares ArgumentsFromConfiguration, which builds an array of launch arguments from an AppLaunchConfiguration.
// ---

#ifndef IOS_TESTING_EARL_GREY_APP_LAUNCH_ARGUMENT_GENERATOR_H_
#define IOS_TESTING_EARL_GREY_APP_LAUNCH_ARGUMENT_GENERATOR_H_

#import <Foundation/Foundation.h>

#import "ios/testing/earl_grey/app_launch_configuration.h"

// Returns an array of arguments to launch the app with from the given
// `configuration`.
NSArray<NSString*>* ArgumentsFromConfiguration(
    AppLaunchConfiguration configuration);

#endif  // IOS_TESTING_EARL_GREY_APP_LAUNCH_ARGUMENT_GENERATOR_H_
