// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Account picker delegate protocol
// summary: Declares the AccountPickerDelegate protocol that reports the account selected in the account picker table.
// ---

#ifndef IOS_CHROME_SHARE_EXTENSION_ACCOUNT_PICKER_DELEGATE_H_
#define IOS_CHROME_SHARE_EXTENSION_ACCOUNT_PICKER_DELEGATE_H_

#import <Foundation/Foundation.h>

@class AccountPickerTable;
@class ShareExtensionAccountInfo;

// Delegate protocol for `AccountPickerTable`.
@protocol AccountPickerDelegate

- (void)didSelectAccountInTable:(AccountPickerTable*)table
                selectedAccount:(ShareExtensionAccountInfo*)selectedAccount;

@end

#endif  // IOS_CHROME_SHARE_EXTENSION_ACCOUNT_PICKER_DELEGATE_H_
