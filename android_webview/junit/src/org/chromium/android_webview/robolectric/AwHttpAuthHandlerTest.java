// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Robolectric tests for AwHttpAuthHandler
// summary: Robolectric tests ensuring HTTP auth handler methods proceed, cancel, and first-attempt checks run on the UI thread and throw on background threads.
// relations:
//   - tests /android_webview/java/src/org/chromium/android_webview/AwHttpAuthHandler.java
// ---

package org.chromium.android_webview.robolectric;

import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;

import org.chromium.android_webview.AwHttpAuthHandler;
import org.chromium.base.test.BaseRobolectricTestRunner;

/** JUnit tests for AwHttpAuthHandler. */
@RunWith(BaseRobolectricTestRunner.class)
public class AwHttpAuthHandlerTest {
    private AwHttpAuthHandler mAuthHandler;

    @Before
    public void setUp() {
        mAuthHandler = AwHttpAuthHandler.create(0, true);
    }

    @Test
    public void testProceed_executesOnUiThread() {
        mAuthHandler.proceed("", "");
    }

    @Test
    public void testCancel_executesOnUiThread() {
        mAuthHandler.cancel();
    }

    @Test
    public void testIsFirstAttempt_executesOnUiThread() {
        mAuthHandler.isFirstAttempt();
    }

    @Test
    public void testProceed_dontExecuteBackgroundThread() {
        throwsInBackground(() -> mAuthHandler.proceed("", ""));
    }

    @Test
    public void testCancel_dontExecuteBackgroundThread() {
        throwsInBackground(() -> mAuthHandler.cancel());
    }

    @Test
    public void testIsFirstAttempt_dontExecuteBackgroundThread() {
        throwsInBackground(() -> mAuthHandler.isFirstAttempt());
    }

    private void throwsInBackground(Runnable r) {
        Thread thread =
                new Thread(
                        () -> {
                            try {
                                r.run();
                                Assert.fail("Should have thrown on background thread");
                            } catch (IllegalStateException e) {
                                // Smooth sailing, we expected this
                            }
                        });
        thread.start();

        try {
            thread.join();
        } catch (InterruptedException e) {
            throw new AssertionError("Background thread interrupted", e);
        }
    }
}
