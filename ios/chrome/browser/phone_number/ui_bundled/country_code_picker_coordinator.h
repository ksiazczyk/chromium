// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Country code picker coordinator interface
// summary: Declares the coordinator that presents the country code picker view controller for a given phone number.
// ---

#ifndef IOS_CHROME_BROWSER_PHONE_NUMBER_UI_BUNDLED_COUNTRY_CODE_PICKER_COORDINATOR_H_
#define IOS_CHROME_BROWSER_PHONE_NUMBER_UI_BUNDLED_COUNTRY_CODE_PICKER_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

// This coordinator presents the `CountryCodePickerViewController`.
@interface CountryCodePickerCoordinator : ChromeCoordinator

// The phone number where the country code is added.
@property(nonatomic, copy) NSString* phoneNumber;

@end

#endif  // IOS_CHROME_BROWSER_PHONE_NUMBER_UI_BUNDLED_COUNTRY_CODE_PICKER_COORDINATOR_H_
