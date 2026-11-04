// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Prefetch OMT trigger tests with check_will_create_url_loader_factory
// summary: Parameterized test class running the off-the-main-thread WebView Prefetch suite with OMT prefetch enabled using the check_will_create_url_loader_factory parameter.
// ---

package org.chromium.android_webview.test;

import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.UseParametersRunnerFactory;

import org.chromium.base.test.util.CommandLineFlags;
import org.chromium.base.test.util.DoNotBatch;
import org.chromium.content_public.common.ContentSwitches;

/**
 * Tests for WebView Prefetch API using the off the main thread (OMT) trigger, with OMT Prefetch
 * enabled with `check_will_create_url_loader_factory/true`. See the class comment of
 * `AwPrefetchTestBase`.
 */
@RunWith(Parameterized.class)
@UseParametersRunnerFactory(AwJUnit4ClassRunnerWithParameters.Factory.class)
@DoNotBatch(reason = "Tests that need browser start are incompatible with @Batch")
@CommandLineFlags.Add({
    ContentSwitches.HOST_RESOLVER_RULES + "=MAP * 127.0.0.1",
    "enable-features=PrefetchOffTheMainThread:check_will_create_url_loader_factory/true,"
            + "WebViewPrefetchOffTheMainThread"
})
public class AwPrefetchOmtCheckWculfTest extends AwPrefetchOmtTestBase {
    public AwPrefetchOmtCheckWculfTest(AwSettingsMutation param) {
        super(param);
    }
}
