// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Docking promo eligibility enum and function declaration
// summary: Declares the IOSDockingPromoEligibility enum and the DockingPromoEligibility function that categorizes users for the Docking Promo.
// ---

#ifndef IOS_CHROME_BROWSER_DOCKING_PROMO_MODEL_UTILS_H_
#define IOS_CHROME_BROWSER_DOCKING_PROMO_MODEL_UTILS_H_

#import <UIKit/UIKit.h>

#import <optional>

#import "base/time/time.h"

@class SceneState;
class ProfileIOS;

// Categorizes users based on their eligibility for the Docking Promo,
// combining engagement levels and recent icon launch behavior.
// LINT.IfChange
enum class IOSDockingPromoEligibility {
  kIneligible = 0,
  kIsLowEngagementUser = 1,
  kHasNoRecentIconLaunches = 2,
  kIsLowEngagementWithNoRecentIconLaunches = 3,
  kMaxValue = kIsLowEngagementWithNoRecentIconLaunches,
};
// LINT.ThenChange(//tools/metrics/histograms/metadata/ios/enums.xml)

// Returns the docking promo eligibility for `profile`. The promo is shown to
// users with low engagement or those who haven't recently launched the app
// from the home screen icon.
IOSDockingPromoEligibility DockingPromoEligibility(ProfileIOS* profile);

#endif  // IOS_CHROME_BROWSER_DOCKING_PROMO_MODEL_UTILS_H_
