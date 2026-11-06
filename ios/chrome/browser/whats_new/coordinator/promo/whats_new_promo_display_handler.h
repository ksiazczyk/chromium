// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: What's New promo display handler header
// summary: Declares WhatsNewPromoDisplayHandler, the handler the Promos Manager calls to display the What's New promo after the first-run experience.
// ---

#ifndef IOS_CHROME_BROWSER_WHATS_NEW_COORDINATOR_PROMO_WHATS_NEW_PROMO_DISPLAY_HANDLER_H_
#define IOS_CHROME_BROWSER_WHATS_NEW_COORDINATOR_PROMO_WHATS_NEW_PROMO_DISPLAY_HANDLER_H_

#import "ios/chrome/browser/promos_manager/coordinator/standard_promo_display_handler.h"

// Handler for displaying What's New. This handler is called by the Promos
// Manager once on the 6th day or 6th launch after the FRE.
@interface WhatsNewPromoDisplayHandler : NSObject <StandardPromoDisplayHandler>

#pragma mark - PromoProtocol

// PromosManagerCommands handler.
@property(nonatomic, weak) id<PromosManagerCommands> handler;

@end

#endif  // IOS_CHROME_BROWSER_WHATS_NEW_COORDINATOR_PROMO_WHATS_NEW_PROMO_DISPLAY_HANDLER_H_
