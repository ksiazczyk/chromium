// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SerialExecutor
// summary: A location-aware executor that queues runnables in an ArrayDeque and executes them one at a time via AsyncTask's thread pool, scheduling the next task after each completes.
// ---

package org.chromium.base.task;

import android.util.Pair;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

import java.util.ArrayDeque;

@NullMarked
class SerialExecutor implements LocationAwareExecutor {
    final ArrayDeque<Pair<Runnable, @Nullable Location>> mTasks = new ArrayDeque<>();
    @Nullable Pair<Runnable, @Nullable Location> mActive;

    @Override
    public synchronized void execute(final Runnable r, @Nullable Location location) {
        mTasks.offer(
                new Pair<>(
                        () -> {
                            try {
                                r.run();
                            } finally {
                                scheduleNext();
                            }
                        },
                        location));
        if (mActive == null) {
            scheduleNext();
        }
    }

    protected synchronized void scheduleNext() {
        if ((mActive = mTasks.poll()) != null) {
            AsyncTask.THREAD_POOL_EXECUTOR.execute(mActive.first, mActive.second);
        }
    }
}
