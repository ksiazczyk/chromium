// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Non-modal sign-in promo type enum header
// summary: Defines the NonModalSignInPromoType enum that distinguishes sign-in promos triggered from bookmarks and the password manager.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_SIGNIN_NON_MODAL_PROMO_COORDINATOR_NON_MODAL_SIGNIN_PROMO_TYPES_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_SIGNIN_NON_MODAL_PROMO_COORDINATOR_NON_MODAL_SIGNIN_PROMO_TYPES_H_

#import <Foundation/Foundation.h>

// Enum representing the different contexts in which the sign-in promo can
// appear.
enum class NonModalSignInPromoType {
  // Sign-in promo triggered from bookmarks.
  kBookmark,
  // Sign-in promo triggered from password manager.
  kPassword
};

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_SIGNIN_NON_MODAL_PROMO_COORDINATOR_NON_MODAL_SIGNIN_PROMO_TYPES_H_
