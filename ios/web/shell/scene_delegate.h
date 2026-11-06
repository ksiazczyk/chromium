// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SceneDelegate interface
// summary: Declares SceneDelegate, a UIWindowSceneDelegate that provides the window for a UIKit scene.
// ---

#ifndef IOS_WEB_SHELL_SCENE_DELEGATE_H_
#define IOS_WEB_SHELL_SCENE_DELEGATE_H_

#import <UIKit/UIKit.h>

// An object acting as a scene delegate for UIKit to provide `window`.
@interface SceneDelegate : NSObject <UIWindowSceneDelegate>

@property(nonatomic, strong) UIWindow* window;

@end

#endif  // IOS_WEB_SHELL_SCENE_DELEGATE_H_
