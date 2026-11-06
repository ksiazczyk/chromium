// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Family promo consumer
// summary: Declares the consumer protocol that receives the title and subtitle display strings for the family promo view.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_SHARING_FAMILY_PROMO_CONSUMER_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_SHARING_FAMILY_PROMO_CONSUMER_H_

// Provides display strings.
@protocol FamilyPromoConsumer <NSObject>

// Sets respective strings in the consumer.
- (void)setTitle:(NSString*)title subtitle:(NSString*)subtitle;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_SHARING_FAMILY_PROMO_CONSUMER_H_
