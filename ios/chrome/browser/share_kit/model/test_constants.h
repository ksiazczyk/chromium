// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test accessibility identifiers for Share Kit flows
// summary: Declares accessibility identifier constants for the fake Share, Manage, and Join flow view controllers used in tests.
// ---

#ifndef IOS_CHROME_BROWSER_SHARE_KIT_MODEL_TEST_CONSTANTS_H_
#define IOS_CHROME_BROWSER_SHARE_KIT_MODEL_TEST_CONSTANTS_H_

#import <Foundation/Foundation.h>

// The accessibility identifier of the Share flow view controller.
extern NSString* const kFakeShareFlowIdentifier;

// The accessibility identifier of the Manage flow view controller.
extern NSString* const kFakeManageFlowIdentifier;

// The accessibility identifier of the Join flow view controller.
extern NSString* const kFakeJoinFlowIdentifier;

#endif  // IOS_CHROME_BROWSER_SHARE_KIT_MODEL_TEST_CONSTANTS_H_
