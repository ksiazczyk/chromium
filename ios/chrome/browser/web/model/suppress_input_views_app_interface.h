// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Suppress input views app interface header
// summary: Declares an Earl Grey app interface that sets shouldSuppressInputViews on the active WebState's CRWWebViewProxy in the app process.
// ---

#ifndef IOS_CHROME_BROWSER_WEB_MODEL_SUPPRESS_INPUT_VIEWS_APP_INTERFACE_H_
#define IOS_CHROME_BROWSER_WEB_MODEL_SUPPRESS_INPUT_VIEWS_APP_INTERFACE_H_

#import <Foundation/Foundation.h>

// App interface for `SuppressInputViewsTestCase` to interact with the active
// `WebState`'s `CRWWebViewProxy` in the app process.
@interface SuppressInputViewsAppInterface : NSObject

// Sets `shouldSuppressInputViews` on the active `WebState`'s `CRWWebViewProxy`.
+ (void)setShouldSuppressInputViews:(BOOL)shouldSuppressInputViews;

@end

#endif  // IOS_CHROME_BROWSER_WEB_MODEL_SUPPRESS_INPUT_VIEWS_APP_INTERFACE_H_
