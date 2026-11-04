// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: JUnit rule dumping thread stacks on test failure
// summary: TestWatcher rule that logs all thread names, states and stack traces when a test fails to aid debugging.
// ---

package org.chromium.base.test.util;

import org.junit.rules.TestWatcher;
import org.junit.runner.Description;

import org.chromium.base.Log;

import java.util.Map;

/**
 * A simple rule that dumps all threads if the test fails. Used for debugging tests where an
 * unknown long running task might be causing problems.
 */
public class DumpThreadsOnFailureRule extends TestWatcher {
    private static final String TAG = " DTOFR";

    @Override
    protected void failed(Throwable e, Description description) {
        super.failed(e, description);
        logThreadDumps();
    }

    private void logThreadDumps() {
        Map<Thread, StackTraceElement[]> threadDumps = Thread.getAllStackTraces();
        for (Map.Entry<Thread, StackTraceElement[]> entry : threadDumps.entrySet()) {
            Thread thread = entry.getKey();
            Log.e(TAG, thread.getName() + ": " + thread.getState());
            for (StackTraceElement stackTraceElement : entry.getValue()) {
                Log.e(TAG, "\t" + stackTraceElement);
            }
        }
    }
}
