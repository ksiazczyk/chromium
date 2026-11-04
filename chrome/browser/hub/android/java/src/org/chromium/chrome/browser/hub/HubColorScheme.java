// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HubColorScheme
// summary: IntDef annotation defining Hub color schemes for the default adaptive and incognito themes.
// ---

package org.chromium.chrome.browser.hub;

import androidx.annotation.IntDef;

import org.chromium.build.annotations.NullMarked;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({HubColorScheme.DEFAULT, HubColorScheme.INCOGNITO})
@Retention(RetentionPolicy.SOURCE)
@NullMarked
public @interface HubColorScheme {
    /** Standard adaptive colors. Could be day or night mode. */
    int DEFAULT = 0;

    /** Incognito theme. */
    int INCOGNITO = 1;
}
