// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExpirationDateEditItem testing category header
// summary: Declares a Testing category on ExpirationDateEditItem that makes the month and year properties writable for use in tests.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_CELLS_EXPIRATION_DATE_EDIT_ITEM_TESTING_H_
#define IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_CELLS_EXPIRATION_DATE_EDIT_ITEM_TESTING_H_

#import "ios/chrome/browser/autofill/ui_bundled/cells/expiration_date_edit_item.h"

// Testing category to make both properties writable for tests.
@interface ExpirationDateEditItem (Testing)

@property(nonatomic, readwrite, copy) NSString* month;
@property(nonatomic, readwrite, copy) NSString* year;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_CELLS_EXPIRATION_DATE_EDIT_ITEM_TESTING_H_
