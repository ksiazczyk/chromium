// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Downloads settings presentation delegate protocol
// summary: Declares the presentation delegate protocol invoked when the Downloads settings table view controller is dismissed.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_DOWNLOADS_SETTINGS_TABLE_VIEW_CONTROLLER_PRESENTATION_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_DOWNLOADS_SETTINGS_TABLE_VIEW_CONTROLLER_PRESENTATION_DELEGATE_H_

#import <Foundation/Foundation.h>

@class DownloadsSettingsTableViewController;

// Presentation delegate for DownloadsSettingsTableViewController.
@protocol DownloadsSettingsTableViewControllerPresentationDelegate <NSObject>

// Invoked when the DownloadsSettingsTableViewController was dismissed.
- (void)downloadsSettingsTableViewControllerWasRemoved:
    (DownloadsSettingsTableViewController*)controller;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_DOWNLOADS_SETTINGS_TABLE_VIEW_CONTROLLER_PRESENTATION_DELEGATE_H_
