// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CWVDownloadTask internal header
// summary: Declares the private initializer that wraps a web::DownloadTask inside the public CWVDownloadTask Objective-C class.
// ---

#ifndef IOS_WEB_VIEW_INTERNAL_CWV_DOWNLOAD_TASK_INTERNAL_H_
#define IOS_WEB_VIEW_INTERNAL_CWV_DOWNLOAD_TASK_INTERNAL_H_

#include <memory>

#import "ios/web_view/public/cwv_download_task.h"

NS_ASSUME_NONNULL_BEGIN

namespace web {
class DownloadTask;
}

@interface CWVDownloadTask ()

- (instancetype)initWithInternalTask:
    (std::unique_ptr<web::DownloadTask>)internalTask;

@end

NS_ASSUME_NONNULL_END

#endif  // IOS_WEB_VIEW_INTERNAL_CWV_DOWNLOAD_TASK_INTERNAL_H_
