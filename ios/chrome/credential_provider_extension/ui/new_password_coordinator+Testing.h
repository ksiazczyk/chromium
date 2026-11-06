// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: New password coordinator testing category
// summary: Declares a testing category that exposes the new password coordinator's navigation controller to tests.
// ---

#ifndef IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_NEW_PASSWORD_COORDINATOR_TESTING_H_
#define IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_NEW_PASSWORD_COORDINATOR_TESTING_H_

#import "ios/chrome/credential_provider_extension/ui/new_password_coordinator.h"

// Testing category to expose a private property to tests.
@interface NewPasswordCoordinator (Testing)

// The view controller of this coordinator.
@property(nonatomic, strong, readonly) UINavigationController* viewController;

@end

#endif  // IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_NEW_PASSWORD_COORDINATOR_TESTING_H_
