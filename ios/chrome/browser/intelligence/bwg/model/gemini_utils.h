// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini page context utilities
// summary: Declares helpers to create a partial Gemini page context from a web state and to obtain the default favicon image.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_UTILS_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_UTILS_H_

#import <UIKit/UIKit.h>

@class GeminiPageContext;
namespace web {
class WebState;
}

namespace gemini {

// Creates and returns a partial `GeminiPageContext` from the provided web
// state. If `is_eligible` is false, the computation state will be marked as
// `kBlocked`. The attachment state of the returned page context will always be
// `kUnknown` and should be configured by the caller.
GeminiPageContext* CreatePartialPageContextForWebState(web::WebState* web_state,
                                                       bool is_eligible);

// Returns the default favicon image for a web state.
UIImage* GetDefaultFavicon();

}  // namespace gemini

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_UTILS_H_
