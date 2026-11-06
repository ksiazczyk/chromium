// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Manage accounts coordinator delegate protocol
// summary: Declares the delegate protocol used to request stopping the manage accounts coordinator.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_MANAGE_ACCOUNTS_COORDINATOR_MANAGE_ACCOUNTS_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_MANAGE_ACCOUNTS_COORDINATOR_MANAGE_ACCOUNTS_COORDINATOR_DELEGATE_H_

#import "ios/chrome/browser/shared/public/commands/show_signin_command.h"
@class ManageAccountsCoordinator;

@protocol ManageAccountsCoordinatorDelegate <NSObject>

// Requests the delegate to stop the manage accounts coordinator.
- (void)manageAccountsCoordinatorWantsToBeStopped:
    (ManageAccountsCoordinator*)coordinator;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_MANAGE_ACCOUNTS_COORDINATOR_MANAGE_ACCOUNTS_COORDINATOR_DELEGATE_H_
