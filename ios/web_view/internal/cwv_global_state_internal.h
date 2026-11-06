// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CWVGlobalState internal header
// summary: Declares the private designated initializer of CWVGlobalState for use within the library.
// ---

#ifndef IOS_WEB_VIEW_INTERNAL_CWV_GLOBAL_STATE_INTERNAL_H_
#define IOS_WEB_VIEW_INTERNAL_CWV_GLOBAL_STATE_INTERNAL_H_

#import "ios/web_view/public/cwv_global_state.h"

NS_ASSUME_NONNULL_BEGIN

@interface CWVGlobalState ()

- (instancetype)init NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

#endif  // IOS_WEB_VIEW_INTERNAL_CWV_GLOBAL_STATE_INTERNAL_H_
