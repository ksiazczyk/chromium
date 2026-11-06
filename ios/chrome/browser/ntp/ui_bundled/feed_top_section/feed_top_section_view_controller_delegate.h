// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feed top section view controller delegate protocol
// summary: Defines the delegate protocol that supplies the signin promo configurator for feed top section components.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_UI_BUNDLED_FEED_TOP_SECTION_FEED_TOP_SECTION_VIEW_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_NTP_UI_BUNDLED_FEED_TOP_SECTION_FEED_TOP_SECTION_VIEW_CONTROLLER_DELEGATE_H_

@class SigninPromoViewConfigurator;

// Delegate to assist in configuring the feed top section components.
@protocol FeedTopSectionViewControllerDelegate

// Configurator responsible for configuring the layout of the Signin Promo.
@property(nonatomic, readonly)
    SigninPromoViewConfigurator* signinPromoConfigurator;

@end

#endif  // IOS_CHROME_BROWSER_NTP_UI_BUNDLED_FEED_TOP_SECTION_FEED_TOP_SECTION_VIEW_CONTROLLER_DELEGATE_H_
