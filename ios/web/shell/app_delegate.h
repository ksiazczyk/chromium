// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AppDelegate interface
// summary: Declares the AppDelegate UIKit application delegate that holds the shell app's main window.
// ---

#ifndef IOS_WEB_SHELL_APP_DELEGATE_H_
#define IOS_WEB_SHELL_APP_DELEGATE_H_

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property(nonatomic, strong) UIWindow* window;

@end

#endif  // IOS_WEB_SHELL_APP_DELEGATE_H_
