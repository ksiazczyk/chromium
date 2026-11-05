// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SiteSearchActivationSource
// summary: IntDef annotation enumerating the sources that can trigger site search, covering space activation and a deprecated tab activation value.
// ---

package org.chromium.chrome.browser.omnibox.suggestions;

import androidx.annotation.IntDef;

import org.chromium.build.annotations.NullMarked;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/** Sources that can trigger site search. */
@NullMarked
@IntDef({SiteSearchActivationSource.SPACE, SiteSearchActivationSource.TAB})
@Retention(RetentionPolicy.SOURCE)
public @interface SiteSearchActivationSource {
    int SPACE = 0;

    /**
     * @deprecated TAB should be handled by suggestion list traversal.
     */
    @Deprecated int TAB = 1;
}
