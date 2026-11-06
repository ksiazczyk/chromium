// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill AI entity edit item factory interface
// summary: Declares a factory that creates table view items for editing Autofill AI attributes based on locale, date formatter, and authentication state.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AI_UI_AUTOFILL_AI_ENTITY_EDIT_ITEM_FACTORY_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AI_UI_AUTOFILL_AI_ENTITY_EDIT_ITEM_FACTORY_H_

#import <Foundation/Foundation.h>

#import <string>

@class TableViewItem;

namespace autofill {
class AttributeInstance;
}

// Factory to create TableViewItems for editing Autofill AI attributes.
@interface AutofillAIEntityEditItemFactory : NSObject

- (instancetype)initWithLocale:(std::string)locale
                 dateFormatter:(NSDateFormatter*)dateFormatter
          userHasAuthenticated:(BOOL)userHasAuthenticated;

// Sets whether the user has successfully authenticated.
- (void)setUserHasAuthenticated:(BOOL)userHasAuthenticated;

// Creates a TableViewItem for the given `attribute`.
- (TableViewItem*)createItemForAttribute:
    (const autofill::AttributeInstance&)attribute;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AI_UI_AUTOFILL_AI_ENTITY_EDIT_ITEM_FACTORY_H_
