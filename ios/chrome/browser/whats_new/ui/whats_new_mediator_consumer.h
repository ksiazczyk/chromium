// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: What's New mediator consumer protocol
// summary: Declares a protocol through which the mediator delivers What's New feature and Chrome tip items to the UI.
// ---

#ifndef IOS_CHROME_BROWSER_WHATS_NEW_UI_WHATS_NEW_MEDIATOR_CONSUMER_H_
#define IOS_CHROME_BROWSER_WHATS_NEW_UI_WHATS_NEW_MEDIATOR_CONSUMER_H_

@class WhatsNewItem;

// Handles updates from the mediator to the UI.
@protocol WhatsNewMediatorConsumer <NSObject>

// Sets What's New feature items and chrome tip items.
- (void)setWhatsNewProperties:(NSArray<WhatsNewItem*>*)chromeTip
                 featureItems:(NSArray<WhatsNewItem*>*)featureItems;

@end

#endif  // IOS_CHROME_BROWSER_WHATS_NEW_UI_WHATS_NEW_MEDIATOR_CONSUMER_H_
