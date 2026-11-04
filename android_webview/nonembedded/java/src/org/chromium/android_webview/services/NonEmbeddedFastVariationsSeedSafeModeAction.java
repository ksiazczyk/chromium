// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Non-embedded fast variations seed SafeMode action
// summary: SafeMode action that schedules a fast variations seed fetch so the seed is distributed on an app's first run in the non-embedded WebView process.
// relations:
//   - depends_on /android_webview/nonembedded/java/src/org/chromium/android_webview/services/AwVariationsSeedFetcher.java
//   - implements /android_webview/nonembedded/java/src/org/chromium/android_webview/services/NonEmbeddedSafeModeAction.java
// ---

package org.chromium.android_webview.services;

import androidx.annotation.NonNull;

import org.chromium.android_webview.common.SafeModeActionIds;

/**
 * A {@link SafeModeAction} to ensure the variations seed is distributed on an app's first run. This
 * is the nonembedded-process counterpart to {@link
 * org.chromium.android_webview.variations.FastVariationsSeedSafeModeAction}.
 */
public class NonEmbeddedFastVariationsSeedSafeModeAction extends NonEmbeddedSafeModeAction {
    // This ID should not be reused for NonEmbedded SafeMode Actions.
    private static final String ID = SafeModeActionIds.FAST_VARIATIONS_SEED;

    @Override
    @NonNull
    public String getId() {
        return ID;
    }

    @Override
    public boolean onActivate() {
        AwVariationsSeedFetcher.scheduleIfNeeded(/* requireFastMode= */ true);
        return true;
    }

    @Override
    public boolean onDeactivate() {
        AwVariationsSeedFetcher.cancelSafeModeSeedFetchSchedulerJob();
        return true;
    }
}
