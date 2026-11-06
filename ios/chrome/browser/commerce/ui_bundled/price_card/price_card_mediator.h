// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PriceCardMediator interface
// summary: Declares the mediator implementing PriceCardDataSource, price card item creation helpers and price drop metrics logging.
// ---

#ifndef IOS_CHROME_BROWSER_COMMERCE_UI_BUNDLED_PRICE_CARD_PRICE_CARD_MEDIATOR_H_
#define IOS_CHROME_BROWSER_COMMERCE_UI_BUNDLED_PRICE_CARD_PRICE_CARD_MEDIATOR_H_

#import "ios/chrome/browser/commerce/model/shopping_persisted_data_tab_helper.h"
#import "ios/chrome/browser/commerce/ui_bundled/price_card/price_card_data_source.h"
#import "ios/chrome/browser/commerce/ui_bundled/price_card/price_card_view.h"
#import "ios/chrome/browser/shared/model/web_state_list/web_state_list.h"

namespace web {
class WebState;
}  // namespace web

// Return data to power PriceCardView for a given WebState
void CreatePriceCardItem(web::WebState* web_state,
                         base::OnceCallback<void(PriceCardItem*)> callback);
// Return a WebState for a tab identifier, given the WebStateList
web::WebState* GetWebState(WebStateList* webStateList, NSString* tab_id);

@interface PriceCardMediator : NSObject <PriceCardDataSource>
- (instancetype)initWithWebStateList:(WebStateList*)webStateList;

// Log metrics associated with the price drop feature.
- (void)logMetrics:(PriceDropLogId)priceDropLogId;
@end

#endif  // IOS_CHROME_BROWSER_COMMERCE_UI_BUNDLED_PRICE_CARD_PRICE_CARD_MEDIATOR_H_
