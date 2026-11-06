// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskRequest testing category header
// summary: Declares a testing category on TaskRequest that exposes the Gaia ID and a factory for creating tasks with a custom execute block.
// ---

#ifndef IOS_CHROME_APP_TASK_REQUEST_TESTING_H_
#define IOS_CHROME_APP_TASK_REQUEST_TESTING_H_

#import "ios/chrome/app/task_request.h"

@class UIScene;

@interface TaskRequest (Testing)

@property(nonatomic, strong, readwrite) NSString* gaiaID;

- (instancetype)initWithScene:(UIScene*)scene;

+ (instancetype)taskForTestingWithScene:(UIScene*)scene
                           executeBlock:(ProceduralBlock)block;

@end

#endif  // IOS_CHROME_APP_TASK_REQUEST_TESTING_H_
