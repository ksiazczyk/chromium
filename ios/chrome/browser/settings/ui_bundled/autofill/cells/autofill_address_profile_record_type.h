// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AutofillAddressProfileRecordType enum header
// summary: Declares an Objective-C enum classifying autofill address profiles as account, home, work, name-email, or local record types.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_AUTOFILL_CELLS_AUTOFILL_ADDRESS_PROFILE_RECORD_TYPE_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_AUTOFILL_CELLS_AUTOFILL_ADDRESS_PROFILE_RECORD_TYPE_H_

#import <Foundation/Foundation.h>

// Corresponds to `autofill::AutofillProfile::RecordType` with the exception
// that `autofill::AutofillProfile::RecordType::kLocalOrSyncable` is further
// broken into local and syncable profiles.
typedef NS_ENUM(NSInteger, AutofillAddressProfileRecordType) {
  AutofillAccountProfile,
  AutofillAccountHomeProfile,
  AutofillAccountWorkProfile,
  AutofillAccountNameEmailProfile,
  AutofillLocalProfile
};

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_AUTOFILL_CELLS_AUTOFILL_ADDRESS_PROFILE_RECORD_TYPE_H_
