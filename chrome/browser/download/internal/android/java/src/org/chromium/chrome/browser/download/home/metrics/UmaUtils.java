// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UmaUtils for download home metrics
// summary: Utility class that records user action metrics for the download home, including logging when offline page items are shared via the Android share sheet.
// ---

package org.chromium.chrome.browser.download.home.metrics;

import org.chromium.base.metrics.RecordUserAction;
import org.chromium.build.annotations.NullMarked;
import org.chromium.components.browser_ui.share.ShareHelper;
import org.chromium.components.offline_items_collection.OfflineItem;
import org.chromium.components.offline_items_collection.OfflineItemFilter;

import java.util.Collection;

/** Utility methods related to metrics collection on download home. */
@NullMarked
public class UmaUtils {
    /**
     * Called to log metrics about shared {@link OfflineItem}s.
     *
     * @param items The {@link OfflineItem}s that were shared.
     */
    public static void recordItemsShared(Collection<OfflineItem> items) {
        for (OfflineItem item : items) {
            if (item.filter == OfflineItemFilter.PAGE) {
                RecordUserAction.record("OfflinePages.Sharing.SharePageFromDownloadHome");
            }
        }

        ShareHelper.recordShareSource(ShareHelper.ShareSourceAndroid.ANDROID_SHARE_SHEET);
    }
}
