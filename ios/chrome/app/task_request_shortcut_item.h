// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskRequestForShortcutItem interface
// summary: Declares the TaskRequestForShortcutItem class that handles application shortcut items with a scene state, completion handler and cold start flag.
// ---

#ifndef IOS_CHROME_APP_TASK_REQUEST_SHORTCUT_ITEM_H_
#define IOS_CHROME_APP_TASK_REQUEST_SHORTCUT_ITEM_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/app/task_request.h"

@class SceneState;

// Task request for handling application shortcut items.
@interface TaskRequestForShortcutItem : TaskRequest

- (instancetype)initWithShortcutItem:(UIApplicationShortcutItem*)shortcutItem
                          sceneState:(SceneState*)sceneState
                             handler:(ShortcutCompletionHandler)handler
                         isColdStart:(BOOL)isColdStart;

@end

#endif  // IOS_CHROME_APP_TASK_REQUEST_SHORTCUT_ITEM_H_
