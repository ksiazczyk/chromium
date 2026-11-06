// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GeminiPageStateChangeDelegate protocol declaration
// summary: Declares the GeminiPageStateChangeDelegate protocol for requesting the page context sharing status.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_PAGE_STATE_CHANGE_DELEGATE_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_PAGE_STATE_CHANGE_DELEGATE_H_

#import <Foundation/Foundation.h>

// Delegate for the Gemini pageState changes.
@protocol GeminiPageStateChangeDelegate

- (void)requestPageContextSharingStatusWithCompletion:
    (void (^)(BOOL sharingEnabled))completionCallBack;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_PAGE_STATE_CHANGE_DELEGATE_H_
