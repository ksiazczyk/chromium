// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bulk upload mediator delegate protocol header
// summary: Defines the BulkUploadMediatorDelegate protocol with methods to dismiss the UI and display a message in a snackbar.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_BULK_UPLOAD_COORDINATOR_BULK_UPLOAD_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_BULK_UPLOAD_COORDINATOR_BULK_UPLOAD_MEDIATOR_DELEGATE_H_

@class BulkUploadMediator;

// Delegate for the BulkUploadMediator
@protocol BulkUploadMediatorDelegate <NSObject>

// Requests the coordinator to dismiss this UI.
- (void)mediatorWantsToBeDismissed:(BulkUploadMediator*)mediator;

// Requests to display `message` in a snackbar.
- (void)displayInSnackbar:(NSString*)message;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_BULK_UPLOAD_COORDINATOR_BULK_UPLOAD_MEDIATOR_DELEGATE_H_
