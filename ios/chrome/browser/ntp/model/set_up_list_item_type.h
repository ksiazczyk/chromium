// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Set Up List item type enum
// summary: Defines the SetUpListItemType enum of possible Set Up List tasks, matching the IOSSetUpListItemType UMA histogram.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_MODEL_SET_UP_LIST_ITEM_TYPE_H_
#define IOS_CHROME_BROWSER_NTP_MODEL_SET_UP_LIST_ITEM_TYPE_H_

// The possible types of items for the Set Up List. This enum must match the
// UMA histogram enum IOSSetUpListItemType.
//
// LINT.IfChange
enum class SetUpListItemType {
  // Removed: kSignInSync = 1,
  kDefaultBrowser = 2,
  kAutofill = 3,
  // Removed: kFollow = 4,
  kAllSet = 5,
  kNotifications = 6,
  // Removed: kDocking = 7,
  // Removed: kAddressBar = 8,
  kSafariImport = 9,
  kBackgroundCustomization = 10,
  kMaxValue = kBackgroundCustomization
};
// LINT.ThenChange(/tools/metrics/histograms/metadata/ios/enums.xml)

#endif  // IOS_CHROME_BROWSER_NTP_MODEL_SET_UP_LIST_ITEM_TYPE_H_
