// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Manage sync settings service delegate protocol
// summary: Declares the protocol that handles user selection actions coming from the manage sync settings view.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_MANAGE_SYNC_UI_MANAGE_SYNC_SETTINGS_SERVICE_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_MANAGE_SYNC_UI_MANAGE_SYNC_SETTINGS_SERVICE_DELEGATE_H_

@class SyncSwitchItem;
@class TableViewItem;

// Protocol to handle user actions from the manage sync settings view.
@protocol ManageSyncSettingsServiceDelegate <NSObject>

// Called when the cell is tapped.
// `cellRect` cell rect in table view system coordinate.
- (void)didSelectItem:(TableViewItem*)item cellRect:(CGRect)cellRect;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_MANAGE_SYNC_UI_MANAGE_SYNC_SETTINGS_SERVICE_DELEGATE_H_
