// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill edit profile field data object
// summary: Declares a data object holding the label and type of an address field that asks for user input.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_AUTOFILL_EDIT_PROFILE_FIELD_H_
#define IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_AUTOFILL_EDIT_PROFILE_FIELD_H_

#import <Foundation/Foundation.h>

// Data object used to store the info about the address field asking for user
// input.
@interface AutofillEditProfileField : NSObject
@property(nonatomic, copy) NSString* fieldLabel;
@property(nonatomic, copy) NSString* fieldType;
@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_AUTOFILL_EDIT_PROFILE_FIELD_H_
