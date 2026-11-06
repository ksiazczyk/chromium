// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Country code picker Earl Grey app interface
// summary: Declares the Earl Grey app interface used to present and dismiss the country code picker during tests.
// ---

#ifndef IOS_CHROME_BROWSER_PHONE_NUMBER_UI_BUNDLED_COUNTRY_CODE_PICKER_APP_INTERFACE_H_
#define IOS_CHROME_BROWSER_PHONE_NUMBER_UI_BUNDLED_COUNTRY_CODE_PICKER_APP_INTERFACE_H_

#import <Foundation/Foundation.h>

// EG test app interface managing the country code picker within the phone
// number feature.
@interface CountryCodePickerAppInterface : NSObject

// Presents the country code picker view controller using the
// `CountryCodePickerCommands` of the current Browser.
+ (void)presentCountryCodePicker;

// Stops presenting the country code picker view controller using the
// `CountryCodePickerCommands` of the current Browser.
+ (void)stopPresentingCountryCodePicker;

@end

#endif  // IOS_CHROME_BROWSER_PHONE_NUMBER_UI_BUNDLED_COUNTRY_CODE_PICKER_APP_INTERFACE_H_
