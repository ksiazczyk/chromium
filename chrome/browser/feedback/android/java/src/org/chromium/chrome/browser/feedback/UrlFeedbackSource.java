// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UrlFeedbackSource
// summary: Feedback source that reports the current URL as a feedback entry, or nothing when the URL is empty.
// ---

package org.chromium.chrome.browser.feedback;

import android.text.TextUtils;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

import java.util.Map;

/** Grabs feedback about the current URL. */
@NullMarked
class UrlFeedbackSource implements FeedbackSource {
    private static final String URL_KEY = "URL";

    private final @Nullable String mUrl;

    UrlFeedbackSource(@Nullable String url) {
        mUrl = url;
    }

    @Override
    public @Nullable Map<String, String> getFeedback() {
        if (TextUtils.isEmpty(mUrl)) return null;
        return Map.of(URL_KEY, mUrl);
    }
}
