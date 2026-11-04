// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Non-Android background task scheduler stub
// summary: Provides a placeholder NotificationBackgroundTaskScheduler for non-Android platforms whose Schedule and Cancel methods are not yet implemented.
// ---

#include "chrome/browser/notifications/scheduler/notification_background_task_scheduler_impl.h"

#include "base/notimplemented.h"

NotificationBackgroundTaskSchedulerImpl::
    NotificationBackgroundTaskSchedulerImpl() = default;

NotificationBackgroundTaskSchedulerImpl::
    ~NotificationBackgroundTaskSchedulerImpl() = default;

void NotificationBackgroundTaskSchedulerImpl::Schedule(
    base::TimeDelta window_start,
    base::TimeDelta window_end) {
  // TODO(xingliu): Implements this for non-Android platform.
  NOTIMPLEMENTED();
}

void NotificationBackgroundTaskSchedulerImpl::Cancel() {
  NOTIMPLEMENTED();
}
