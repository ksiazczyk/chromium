// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password infobar modal delegate protocol
// summary: Declares the InfobarPasswordModalDelegate protocol for handling password infobar modal actions such as updating credentials, never saving credentials for a site, and presenting password settings.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_MODALS_INFOBAR_PASSWORD_MODAL_DELEGATE_H_
#define IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_MODALS_INFOBAR_PASSWORD_MODAL_DELEGATE_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/infobars/ui_bundled/modals/infobar_modal_delegate.h"

// Delegate to handle Password Infobar Modal actions.
@protocol InfobarPasswordModalDelegate <InfobarModalDelegate>

// Updates (or saves in case they haven't been previously saved) the `username`
// and `password` of the PasswordManagerInfobarDelegate.
- (void)updateCredentialsWithUsername:(NSString*)username
                             password:(NSString*)password;

// Blocks the current site to never prompt the user to save its credentials
// again.
- (void)neverSaveCredentialsForCurrentSite;

// Dismisses the InfobarModal with no animation, then presents the Password
// Settings screen modally.
- (void)presentPasswordSettings;

@end

#endif  // IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_MODALS_INFOBAR_PASSWORD_MODAL_DELEGATE_H_
