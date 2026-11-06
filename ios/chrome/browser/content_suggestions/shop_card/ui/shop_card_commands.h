// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shop card commands protocol
// summary: Declares the ShopCardCommands protocol for handling shop card events such as opening the displayed item.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SHOP_CARD_UI_SHOP_CARD_COMMANDS_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SHOP_CARD_UI_SHOP_CARD_COMMANDS_H_

@class ShopCardConfig;

// Command protocol for events of ShopCard module.
@protocol ShopCardCommands

// Opens the displayed shop card item.
- (void)openShopCardItem:(ShopCardConfig*)config;

@end
#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SHOP_CARD_UI_SHOP_CARD_COMMANDS_H_
