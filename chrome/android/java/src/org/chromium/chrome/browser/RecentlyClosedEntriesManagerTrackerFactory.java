// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Factory for the recently closed entries manager tracker
// summary: Factory providing the singleton RecentlyClosedEntriesManagerTracker instance, with a hook for test overrides.
// ---

package org.chromium.chrome.browser;

import org.chromium.base.ResettersForTesting;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Factory for creating {@link RecentlyClosedEntriesManagerTracker}. */
@NullMarked
public final class RecentlyClosedEntriesManagerTrackerFactory {
    private static @Nullable RecentlyClosedEntriesManagerTracker sInstanceForTesting;

    private RecentlyClosedEntriesManagerTrackerFactory() {}

    /** Obtains the singleton instance of {@link RecentlyClosedEntriesManagerTracker}. */
    public static RecentlyClosedEntriesManagerTracker getInstance() {
        if (sInstanceForTesting != null) {
            return sInstanceForTesting;
        }
        return RecentlyClosedEntriesManagerTrackerImpl.getInstance();
    }

    public static void setInstanceForTesting(
            RecentlyClosedEntriesManagerTracker instanceForTesting) {
        sInstanceForTesting = instanceForTesting;
        ResettersForTesting.register(() -> sInstanceForTesting = null); // IN-TEST
    }
}
