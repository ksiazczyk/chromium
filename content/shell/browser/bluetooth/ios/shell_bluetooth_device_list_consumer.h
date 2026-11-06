// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bluetooth device list consumer protocol for iOS content shell
// summary: Defines the protocol the model uses to push device additions and updates to the Bluetooth device list UI.
// ---

#ifndef CONTENT_SHELL_BROWSER_BLUETOOTH_IOS_SHELL_BLUETOOTH_DEVICE_LIST_CONSUMER_H_
#define CONTENT_SHELL_BROWSER_BLUETOOTH_IOS_SHELL_BLUETOOTH_DEVICE_LIST_CONSUMER_H_

#import <Foundation/Foundation.h>

// Consumer for model to push configurations to the device list UI.
@protocol ShellBluetoothDeviceListConsumer <NSObject>

// Adds a cell for a new device to the UITableView or updates the information of
// an existing cell.
- (void)addOrUpdateDevice:(NSString*)deviceID
         shouldUpdateName:(bool)shouldUpdateName
               deviceName:(NSString*)deviceName
            gattConnected:(bool)gattConnected
      signalStrengthLevel:(NSInteger)signalStrengthLevel;

@end

#endif  // CONTENT_SHELL_BROWSER_BLUETOOTH_IOS_SHELL_BLUETOOTH_DEVICE_LIST_CONSUMER_H_
