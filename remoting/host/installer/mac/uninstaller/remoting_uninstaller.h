// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remoting uninstaller class header
// summary: Declares the RemotingUninstaller Objective-C class that carries out the Chrome Remote Desktop host uninstall on macOS.
// ---

#ifndef REMOTING_HOST_INSTALLER_MAC_UNINSTALLER_REMOTING_UNINSTALLER_H_
#define REMOTING_HOST_INSTALLER_MAC_UNINSTALLER_REMOTING_UNINSTALLER_H_

#import <Cocoa/Cocoa.h>

@interface RemotingUninstaller : NSObject {
}

- (OSStatus)remotingUninstall;

@end

#endif  // REMOTING_HOST_INSTALLER_MAC_UNINSTALLER_REMOTING_UNINSTALLER_H_