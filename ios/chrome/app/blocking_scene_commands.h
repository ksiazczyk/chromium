// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Blocking scene commands protocol
// summary: Declares the app-level protocol for activating the scene that currently shows blocking UI such as First Run.
// ---

#ifndef IOS_CHROME_APP_BLOCKING_SCENE_COMMANDS_H_
#define IOS_CHROME_APP_BLOCKING_SCENE_COMMANDS_H_

#import <UIKit/UIKit.h>

// App-level commands related to blocking UI, such as First Run.
@protocol BlockingSceneCommands

// Activates the scene that currently shows blocking UI.
- (void)activateBlockingScene:(UIScene*)requestingScene;

@end

#endif  // IOS_CHROME_APP_BLOCKING_SCENE_COMMANDS_H_
