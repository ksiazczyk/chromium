// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SendTabPromoAudience protocol header
// summary: Declares the SendTabPromoAudience Objective-C protocol with a callback invoked when the user selects the Send Tab promo card.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SEND_TAB_TO_SELF_UI_SEND_TAB_PROMO_AUDIENCE_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SEND_TAB_TO_SELF_UI_SEND_TAB_PROMO_AUDIENCE_H_

// Interface to handle Send Tab promo card user events.
@protocol SendTabPromoAudience

// Called when the promo is selected by the user.
- (void)didSelectSendTabPromo;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SEND_TAB_TO_SELF_UI_SEND_TAB_PROMO_AUDIENCE_H_
