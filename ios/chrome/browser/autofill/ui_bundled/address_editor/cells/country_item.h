// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Country item interface
// summary: Declares a table view text item for the autofill country field that holds the country code.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_CELLS_COUNTRY_ITEM_H_
#define IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_CELLS_COUNTRY_ITEM_H_

#import "ios/chrome/browser/shared/ui/table_view/cells/table_view_text_item.h"

// Item for autofill country field.
@interface CountryItem : TableViewTextItem

// The Country code.
@property(nonatomic, copy) NSString* countryCode;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_CELLS_COUNTRY_ITEM_H_
