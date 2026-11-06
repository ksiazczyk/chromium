// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safe Browsing coordinator header
// summary: Declares SafeBrowsingCoordinator, a Chrome coordinator that serves as SafeBrowsingTabHelper delegate and opens safe browsing settings from the interstitial page.
// ---

#ifndef IOS_CHROME_BROWSER_SAFE_BROWSING_UI_BUNDLED_SAFE_BROWSING_COORDINATOR_H_
#define IOS_CHROME_BROWSER_SAFE_BROWSING_UI_BUNDLED_SAFE_BROWSING_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"
#import "ios/components/security_interstitials/safe_browsing/safe_browsing_tab_helper_delegate.h"

// Used as a delegate for SafeBrowsingTabHelper and makes initial call to open
// safe browsing settings from interstitial page.
@interface SafeBrowsingCoordinator
    : ChromeCoordinator <SafeBrowsingTabHelperDelegate>

@end

#endif  // IOS_CHROME_BROWSER_SAFE_BROWSING_UI_BUNDLED_SAFE_BROWSING_COORDINATOR_H_
