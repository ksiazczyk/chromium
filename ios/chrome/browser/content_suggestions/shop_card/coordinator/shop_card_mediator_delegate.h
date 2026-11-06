// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shop card mediator delegate protocol
// summary: Declares the ShopCardMediatorDelegate protocol for reconfiguring, inserting, and removing the shop card in the magic stack.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SHOP_CARD_COORDINATOR_SHOP_CARD_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SHOP_CARD_COORDINATOR_SHOP_CARD_MEDIATOR_DELEGATE_H_

// Delegate to communicate events back to owner of ShopCardMediator.
@protocol ShopCardMediatorDelegate

// Signals that the ShopCardMediator did reconfigure the existing item.
- (void)shopCardMediatorDidReconfigureItem;

// Remove ShopCard from the magic stack.
- (void)removeShopCard;

// Add ShopCard to the magic stack.
- (void)insertShopCard;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SHOP_CARD_COORDINATOR_SHOP_CARD_MEDIATOR_DELEGATE_H_
