// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Save to Photos account selection consumer protocol
// summary: Protocol for the second Save to Photos settings screen, used to populate the list of device accounts from which a default account can be chosen.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_SAVE_TO_PHOTOS_SAVE_TO_PHOTOS_SETTINGS_ACCOUNT_SELECTION_CONSUMER_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_SAVE_TO_PHOTOS_SAVE_TO_PHOTOS_SETTINGS_ACCOUNT_SELECTION_CONSUMER_H_

#import <Foundation/Foundation.h>

@class AccountPickerSelectionScreenIdentityItemConfigurator;

// Protocol for the second screen of Save to Photos settings.
@protocol SaveToPhotosSettingsAccountSelectionConsumer <NSObject>

// Sets the presented list of accounts on the device from which the user can
// choose a default Save to Photos account.
- (void)populateAccountsOnDevice:
    (NSArray<AccountPickerSelectionScreenIdentityItemConfigurator*>*)
        configurators;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_SAVE_TO_PHOTOS_SAVE_TO_PHOTOS_SETTINGS_ACCOUNT_SELECTION_CONSUMER_H_
