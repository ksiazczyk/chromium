// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BackgroundThreadExecutor helper for background task execution
// summary: Executor that creates a named background HandlerThread and posts submitted tasks to it.
// ---

package org.chromium.android_webview.common;

import android.os.Handler;
import android.os.HandlerThread;

import org.chromium.build.annotations.NullMarked;

import java.util.concurrent.Executor;

/** A helper class which creates a background thread to run tasks on. */
@NullMarked
public class BackgroundThreadExecutor implements Executor {
    private final HandlerThread mHandlerThread;
    private final Handler mHandler;

    public BackgroundThreadExecutor(String threadName) {
        mHandlerThread = new HandlerThread(threadName);
        mHandlerThread.start();
        mHandler = new Handler(mHandlerThread.getLooper());
    }

    @Override
    public void execute(Runnable r) {
        mHandler.post(r);
    }
}
