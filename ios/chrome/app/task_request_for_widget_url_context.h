// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskRequestForWidgetURLContext interface
// summary: Declares the TaskRequest subclass for WidgetKit URLs, exposing the parsed WidgetKit extension action for the request.
// ---

#ifndef IOS_CHROME_APP_TASK_REQUEST_FOR_WIDGET_URL_CONTEXT_H_
#define IOS_CHROME_APP_TASK_REQUEST_FOR_WIDGET_URL_CONTEXT_H_

#import <optional>

#import "ios/chrome/app/startup/app_launch_metrics.h"
#import "ios/chrome/app/task_request_url_context.h"
#import "ios/chrome/common/app_group/widget_constants.h"

// Subclass of TaskRequestForURLContext for handling WidgetKit URLs
// (chromewidgetkit://).
@interface TaskRequestForWidgetURLContext : TaskRequestForURLContext

// The parsed WidgetKit action for this request.
@property(nonatomic, assign, readonly) std::optional<WidgetKitExtensionAction>
    action;

@end

#endif  // IOS_CHROME_APP_TASK_REQUEST_FOR_WIDGET_URL_CONTEXT_H_
