// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Site settings coordinator delegate protocol
// summary: Declares the SiteSettingsCoordinatorDelegate protocol used to notify a delegate when the site settings coordinator is removed.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_SITE_SETTINGS_COORDINATOR_SITE_SETTINGS_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_SITE_SETTINGS_COORDINATOR_SITE_SETTINGS_COORDINATOR_DELEGATE_H_

@class SiteSettingsCoordinator;

// Delegate protocol for SiteSettingsCoordinator.
@protocol SiteSettingsCoordinatorDelegate <NSObject>

// Notifies the delegate that the coordinator was removed.
- (void)siteSettingsCoordinatorWasRemoved:(SiteSettingsCoordinator*)coordinator;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_SITE_SETTINGS_COORDINATOR_SITE_SETTINGS_COORDINATOR_DELEGATE_H_
