// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HistorySyncConsumer protocol header
// summary: Declares the HistorySyncConsumer protocol with methods for updating the history sync UI, such as avatar image, footer text, and button visibility.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_HISTORY_SYNC_UI_HISTORY_SYNC_CONSUMER_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_HISTORY_SYNC_UI_HISTORY_SYNC_CONSUMER_H_

#import <UIKit/UIKit.h>

#import "components/signin/public/identity_manager/tribool.h"

// Handles history sync UI updates
@protocol HistorySyncConsumer

// Set the avatar image for the primary identity
- (void)setPrimaryIdentityAvatarImage:(UIImage*)primaryIdentityAvatarImage;

// Set the avatar label for the primary identity
- (void)setPrimaryIdentityAvatarAccessibilityLabel:
    (NSString*)primaryIdentityAvatarAccessibilityLabel;

// Set the text for the disclaimer footer.
- (void)setFooterText:(NSString*)footerText;

// Set the button style and update button visibility.
- (void)displayButtonsWithRestrictionCapability:(signin::Tribool)capability;

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_HISTORY_SYNC_UI_HISTORY_SYNC_CONSUMER_H_
