// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScheduledTaskExecutor scheduled task data definitions
// summary: Defines constructors and destructor for ScheduledTaskExecutor's ScheduledTaskData struct that holds scheduled task policy settings.
// ---

#include "chrome/browser/ash/policy/scheduled_task_handler/scheduled_task_executor.h"

namespace policy {

ScheduledTaskExecutor::ScheduledTaskData::ScheduledTaskData() = default;
ScheduledTaskExecutor::ScheduledTaskData::ScheduledTaskData(
    const ScheduledTaskData&) = default;
ScheduledTaskExecutor::ScheduledTaskData::~ScheduledTaskData() = default;

}  // namespace policy
