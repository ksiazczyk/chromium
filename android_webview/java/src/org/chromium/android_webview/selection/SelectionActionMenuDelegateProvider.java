// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SelectionActionMenuDelegateProvider
// summary: Singleton provider that creates the appropriate selection action menu delegate, choosing the platform, Samsung or default autofill delegate based on client and device.
// relations:
//   - depends_on /android_webview/java/src/org/chromium/android_webview/selection/PlatformSelectionActionMenuDelegate.java
//   - depends_on /android_webview/java/src/org/chromium/android_webview/selection/SamsungSelectionActionMenuDelegate.java
// ---

package org.chromium.android_webview.selection;

import android.os.Build;

import org.chromium.android_webview.AwContentsStatics;
import org.chromium.android_webview.common.Lifetime;
import org.chromium.build.annotations.NullMarked;
import org.chromium.components.autofill.AutofillSelectionActionMenuDelegate;

/** Class responsible to create SelectionActionMenuDelegate as required. */
@Lifetime.Singleton
@NullMarked
public class SelectionActionMenuDelegateProvider {

    private SelectionActionMenuDelegateProvider() {}

    public static AutofillSelectionActionMenuDelegate getSelectionActionMenuDelegate() {
        if (AwContentsStatics.getSelectionActionMenuClient() != null) {
            return new PlatformSelectionActionMenuDelegate(
                    AwContentsStatics.getSelectionActionMenuClient());
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU
                && SamsungSelectionActionMenuDelegate.shouldUseSamsungMenuItemOrdering()) {
            return new SamsungSelectionActionMenuDelegate();
        }
        return new AutofillSelectionActionMenuDelegate();
    }
}
