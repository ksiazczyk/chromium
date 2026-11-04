// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TracingNotificationService
// summary: Split-compatible intent service entry point that delegates tracing notification actions to TracingNotificationServiceImpl.
// ---

package org.chromium.chrome.browser.tracing;

import org.chromium.build.annotations.IdentifierNameString;
import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.base.SplitCompatIntentService;

/** See {@link TracingNotificationServiceImpl}. */
@NullMarked
public class TracingNotificationService extends SplitCompatIntentService {
    private static final String TAG = "tracing_notification";

    @SuppressWarnings("FieldCanBeFinal") // @IdentifierNameString requires non-final
    private static @IdentifierNameString String sImplClassName =
            "org.chromium.chrome.browser.tracing.TracingNotificationServiceImpl";

    public TracingNotificationService() {
        super(sImplClassName, TAG);
    }
}
