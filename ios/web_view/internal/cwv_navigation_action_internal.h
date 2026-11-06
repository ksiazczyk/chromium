// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CWVNavigationAction internal header
// summary: Declares the designated initializer of CWVNavigationAction for internal creation with request, user-initiated flag, and navigation type.
// ---

#ifndef IOS_WEB_VIEW_INTERNAL_CWV_NAVIGATION_ACTION_INTERNAL_H_
#define IOS_WEB_VIEW_INTERNAL_CWV_NAVIGATION_ACTION_INTERNAL_H_

#import "ios/web_view/public/cwv_navigation_action.h"

NS_ASSUME_NONNULL_BEGIN

@interface CWVNavigationAction ()

- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)initWithRequest:(NSURLRequest*)request
                          userInitiated:(BOOL)userInitiated
                         navigationType:(CWVNavigationType)navigationType
    NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

#endif  // IOS_WEB_VIEW_INTERNAL_CWV_NAVIGATION_ACTION_INTERNAL_H_
