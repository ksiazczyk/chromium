// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WhatsNewFeatureProvider for the What's New page
// summary: Supplies the list of WhatsNewFeature entries to display on the What's New page, with support for overriding the list in tests.
// ---

package org.chromium.chrome.browser.ui.android.whats_new.features;

import org.chromium.base.ResettersForTesting;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.ui.android.whats_new.features.WhatsNewFeatureUtils.WhatsNewType;

import java.util.ArrayList;
import java.util.List;

/**
 * This class is responsible for providing a list of {@link WhatsNewFeature} to display in the
 * What's New page.
 */
@NullMarked
public class WhatsNewFeatureProvider {
    private static @Nullable List<WhatsNewFeature> sFeatureListForTesting;

    public static void setFeatureListForTests(List<WhatsNewFeature> featureList) {
        sFeatureListForTesting = featureList;
        ResettersForTesting.register(() -> sFeatureListForTesting = null);
    }

    public static List<WhatsNewFeature> getFeatureEntries() {
        if (sFeatureListForTesting != null) return sFeatureListForTesting;

        List<WhatsNewFeature> featureList = new ArrayList<>();
        for (@WhatsNewType int type : WhatsNewFeatureUtils.CURRENT_WHATS_NEW_ENTRIES) {
            featureList.add(WhatsNewFeatureUtils.featureFromType(type));
        }
        return featureList;
    }
}
