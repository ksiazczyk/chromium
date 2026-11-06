// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HtmlOnColorChangedListener
// summary: Callback interface notified when the user changes the color in the HTML color picker.
// ---

package org.chromium.components.embedder_support.delegate;

import org.chromium.build.annotations.NullMarked;

/** The callback used to indicate the user changed the color. */
@NullMarked
public interface HtmlOnColorChangedListener {
    /**
     * Called upon a color change.
     *
     * @param color The color that was set.
     */
    void onColorChanged(int color);
}
