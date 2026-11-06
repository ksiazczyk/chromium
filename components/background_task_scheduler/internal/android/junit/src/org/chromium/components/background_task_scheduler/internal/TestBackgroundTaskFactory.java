// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test background task factory
// summary: Test BackgroundTaskFactory that returns a TestBackgroundTask for the TEST task ID during unit testing.
// ---

package org.chromium.components.background_task_scheduler.internal;

import org.chromium.components.background_task_scheduler.BackgroundTask;
import org.chromium.components.background_task_scheduler.BackgroundTaskFactory;
import org.chromium.components.background_task_scheduler.TaskIds;

/**
 * Implementation of {@link BackgroundTaskFactory} for testing.
 * The default {@link TestBackgroundTask} class is used.
 */
public class TestBackgroundTaskFactory implements BackgroundTaskFactory {
    @Override
    public BackgroundTask getBackgroundTaskFromTaskId(int taskId) {
        if (taskId == TaskIds.TEST) {
            return new TestBackgroundTask();
        }
        return null;
    }
}
