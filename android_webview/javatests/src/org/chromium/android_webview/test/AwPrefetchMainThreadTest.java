// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Prefetch API main thread trigger tests
// summary: Parameterized test class running the WebView Prefetch API suite with the main-thread trigger while off-the-main-thread prefetch features are disabled.
// ---

package org.chromium.android_webview.test;

import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.UseParametersRunnerFactory;

import org.chromium.base.test.util.CommandLineFlags;
import org.chromium.base.test.util.DoNotBatch;
import org.chromium.content_public.common.ContentSwitches;

/**
 * Tests for WebView Prefetch API on the main thread (MT) trigger. See the class comment of
 * `AwPrefetchTestBase`.
 */
@RunWith(Parameterized.class)
@UseParametersRunnerFactory(AwJUnit4ClassRunnerWithParameters.Factory.class)
@DoNotBatch(reason = "Tests that need browser start are incompatible with @Batch")
@CommandLineFlags.Add({
    ContentSwitches.HOST_RESOLVER_RULES + "=MAP * 127.0.0.1",
    "disable-features=PrefetchOffTheMainThread,WebViewPrefetchOffTheMainThread"
})
public class AwPrefetchMainThreadTest extends AwPrefetchTestBase {
    public AwPrefetchMainThreadTest(AwSettingsMutation param) {
        super(param, /* runOnWorkerThread= */ false);
    }
}
