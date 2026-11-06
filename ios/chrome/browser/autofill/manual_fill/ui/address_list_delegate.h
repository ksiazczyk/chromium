// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AddressListDelegate protocol
// summary: Declares delegate actions for the manual fallback address list, such as opening settings or address details in edit mode.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_MANUAL_FILL_UI_ADDRESS_LIST_DELEGATE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_MANUAL_FILL_UI_ADDRESS_LIST_DELEGATE_H_

// Delegate for actions in manual fallback's addresses list.
@protocol AddressListDelegate

// Opens addresses settings.
- (void)openAddressSettings;

// Opens the details of the given address in edit mode. `offerMigrateToAccount`
// indicates whether or not the option to migrate the address to the account
// should be available in the details page.
- (void)openAddressDetailsInEditMode:(autofill::AutofillProfile)address
               offerMigrateToAccount:(BOOL)offerMigrateToAccount;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_MANUAL_FILL_UI_ADDRESS_LIST_DELEGATE_H_
