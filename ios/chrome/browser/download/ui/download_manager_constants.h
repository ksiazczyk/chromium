// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Download manager UI constants
// summary: Declares accessibility identifiers for download manager buttons and overlays plus the shared animation duration.
// ---

#ifndef IOS_CHROME_BROWSER_DOWNLOAD_UI_DOWNLOAD_MANAGER_CONSTANTS_H_
#define IOS_CHROME_BROWSER_DOWNLOAD_UI_DOWNLOAD_MANAGER_CONSTANTS_H_

#import <Foundation/Foundation.h>

extern NSString* const kDownloadManagerDownloadAccessibilityIdentifier;
extern NSString* const kDownloadManagerSaveEllipsisAccessibilityIdentifier;
extern NSString* const kDownloadManagerOpenAccessibilityIdentifier;
extern NSString* const kDownloadManagerOpenInAccessibilityIdentifier;
extern NSString* const kDownloadManagerOpenInDriveAccessibilityIdentifier;
extern NSString* const kDownloadManagerInstallAppAccessibilityIdentifier;
extern NSString* const kDownloadManagerTryAgainAccessibilityIdentifier;
extern NSString* const kDownloadManagerCloseButtonAccessibilityIdentifier;
extern NSString* const
    kDownloadManagerDownloadReplacingOverlayAccessibilityIdentifier;

// Duration for all animations used in Download Manager.
extern const NSTimeInterval kDownloadManagerAnimationDuration;

#endif  // IOS_CHROME_BROWSER_DOWNLOAD_UI_DOWNLOAD_MANAGER_CONSTANTS_H_
