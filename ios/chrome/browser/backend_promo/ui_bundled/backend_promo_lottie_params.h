// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Backend promo Lottie parameters header
// summary: Declares the BackendPromoLottieParams class holding light and dark mode color mappings and text mappings for Lottie animations in backend promos.
// ---

#ifndef IOS_CHROME_BROWSER_BACKEND_PROMO_UI_BUNDLED_BACKEND_PROMO_LOTTIE_PARAMS_H_
#define IOS_CHROME_BROWSER_BACKEND_PROMO_UI_BUNDLED_BACKEND_PROMO_LOTTIE_PARAMS_H_

#import <Foundation/Foundation.h>

// Holds color and text mapping parameters for Lottie animations.
@interface BackendPromoLottieParams : NSObject

// Light mode color mapping dictionary from Lottie keypaths to semantic
// color names or hex strings.
@property(nonatomic, copy)
    NSDictionary<NSString*, NSString*>* lightColorMapping;

// Dark mode color mapping dictionary from Lottie keypaths to semantic
// color names or hex strings.
@property(nonatomic, copy) NSDictionary<NSString*, NSString*>* darkColorMapping;

// Text mapping dictionary from Lottie text layer IDs to replacement text
// strings.
@property(nonatomic, copy) NSDictionary<NSString*, NSString*>* textMapping;

@end

#endif  // IOS_CHROME_BROWSER_BACKEND_PROMO_UI_BUNDLED_BACKEND_PROMO_LOTTIE_PARAMS_H_
