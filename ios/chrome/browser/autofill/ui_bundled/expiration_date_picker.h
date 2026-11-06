// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExpirationDatePicker interface
// summary: Declares a UIPickerView subclass for selecting a credit card expiration month and year with a selection callback.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_EXPIRATION_DATE_PICKER_H_
#define IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_EXPIRATION_DATE_PICKER_H_

#import <UIKit/UIKit.h>

// UIPickerView for selecting the month and year of an expiration date.
@interface ExpirationDatePicker : UIPickerView

@property(nonatomic, copy, readonly) NSString* month;
@property(nonatomic, copy, readonly) NSString* year;
@property(nonatomic) void (^onDateSelected)(NSString* month, NSString* year);

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_EXPIRATION_DATE_PICKER_H_
