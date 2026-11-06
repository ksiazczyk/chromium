// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bluetooth chooser coordinator interface for iOS content shell
// summary: Declares the ShellBluetoothChooserCoordinator Objective-C class and its C++ holder that present the iOS Bluetooth device chooser dialog.
// ---

#ifndef CONTENT_SHELL_BROWSER_BLUETOOTH_IOS_SHELL_BLUETOOTH_CHOOSER_COORDINATOR_H_
#define CONTENT_SHELL_BROWSER_BLUETOOTH_IOS_SHELL_BLUETOOTH_CHOOSER_COORDINATOR_H_

#import <Foundation/Foundation.h>

#import <string>

#import "ui/gfx/native_ui_types.h"

namespace content {
class ShellBluetoothChooserIOS;
}  // namespace content

@class ShellDeviceListViewController;
@class ShellBluetoothChooserMediator;
@class UIViewController;

@interface ShellBluetoothChooserCoordinator : NSObject

@property(nonatomic, strong)
    ShellDeviceListViewController* deviceListViewController;

@property(nonatomic, strong)
    ShellBluetoothChooserMediator* bluetoothChooserMediator;

- (instancetype)initWithBaseViewController:(UIViewController*)baseViewController
                                     title:(NSString*)title
                          bluetoothChooser:(content::ShellBluetoothChooserIOS*)
                                               bluetoothChooser;

@end

namespace content {

class ShellBluetoothChooserCoordinatorHolder {
 public:
  ShellBluetoothChooserCoordinatorHolder(
      gfx::NativeWindow native_window,
      ShellBluetoothChooserIOS* bluetooth_chooser_ios,
      const std::u16string& title);
  virtual ~ShellBluetoothChooserCoordinatorHolder();

  ShellBluetoothChooserMediator* getMediator();

 private:
  ShellBluetoothChooserCoordinator* coordinator_;
};

}  // namespace content

#endif  // CONTENT_SHELL_BROWSER_BLUETOOTH_IOS_SHELL_BLUETOOTH_CHOOSER_COORDINATOR_H_
