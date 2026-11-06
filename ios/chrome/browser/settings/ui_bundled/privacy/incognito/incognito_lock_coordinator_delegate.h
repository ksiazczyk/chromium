// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Incognito lock coordinator delegate protocol
// summary: Declares the delegate protocol called when the lock view controller is removed from the navigation controller.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PRIVACY_INCOGNITO_INCOGNITO_LOCK_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PRIVACY_INCOGNITO_INCOGNITO_LOCK_COORDINATOR_DELEGATE_H_

@class IncognitoLockCoordinator;

// Delegate for IncognitoLockCoordinator.
@protocol IncognitoLockCoordinatorDelegate

// Called when the view controller is removed from navigation controller.
- (void)incognitoLockCoordinatorDidRemove:
    (IncognitoLockCoordinator*)coordinator;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PRIVACY_INCOGNITO_INCOGNITO_LOCK_COORDINATOR_DELEGATE_H_
