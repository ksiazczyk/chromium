// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safari data export coordinator interface
// summary: Declares the coordinator responsible for presenting the Safari data export screen.
// ---

#ifndef IOS_CHROME_BROWSER_SAFARI_DATA_IMPORT_COORDINATOR_SAFARI_DATA_IMPORT_EXPORT_COORDINATOR_H_
#define IOS_CHROME_BROWSER_SAFARI_DATA_IMPORT_COORDINATOR_SAFARI_DATA_IMPORT_EXPORT_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@protocol SafariDataImportChildCoordinatorDelegate;

/// Coordinator for the safari data export screen.
@interface SafariDataImportExportCoordinator : ChromeCoordinator

/// Delegate object that handles Safari import events.
@property(nonatomic, weak) id<SafariDataImportChildCoordinatorDelegate>
    delegate;

@end

#endif  // IOS_CHROME_BROWSER_SAFARI_DATA_IMPORT_COORDINATOR_SAFARI_DATA_IMPORT_EXPORT_COORDINATOR_H_
