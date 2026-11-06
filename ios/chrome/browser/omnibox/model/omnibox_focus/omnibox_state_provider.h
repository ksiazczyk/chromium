// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OmniboxStateProvider protocol
// summary: Declares the OmniboxStateProvider Objective-C protocol with a method reporting whether the omnibox is focused.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_FOCUS_OMNIBOX_STATE_PROVIDER_H_
#define IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_FOCUS_OMNIBOX_STATE_PROVIDER_H_

#import <Foundation/Foundation.h>

/// Provides the omnibox state.
@protocol OmniboxStateProvider <NSObject>

/// Returns whether the omnibox is focused.
- (BOOL)isOmniboxFocused;

@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_FOCUS_OMNIBOX_STATE_PROVIDER_H_
