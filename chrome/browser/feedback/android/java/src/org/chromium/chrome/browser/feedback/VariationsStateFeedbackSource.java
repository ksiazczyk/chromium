// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VariationsStateFeedbackSource
// summary: Feedback source that returns the command-line variations feedback map, skipping collection for off-the-record profiles.
// ---

package org.chromium.chrome.browser.feedback;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.components.variations.VariationsAssociatedData;

import java.util.Map;

/** Grabs feedback about the current command-line variations. */
@NullMarked
class VariationsStateFeedbackSource implements FeedbackSource {
    private final boolean mIsOffTheRecord;

    VariationsStateFeedbackSource(Profile profile) {
        mIsOffTheRecord = profile.isOffTheRecord();
    }

    @Override
    public @Nullable Map<String, String> getFeedback() {
        if (mIsOffTheRecord) return null;
        return VariationsAssociatedData.getVariationsStateFeedbackMap();
    }
}
