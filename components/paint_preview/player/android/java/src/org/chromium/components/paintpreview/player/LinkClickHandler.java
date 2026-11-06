// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Link click handler interface
// summary: Interface for processing link click events from the Paint Preview player's hit tests.
// ---

package org.chromium.components.paintpreview.player;

import org.chromium.build.annotations.NullMarked;
import org.chromium.url.GURL;

/** Interface for processing link click events from the player's hit tests. */
@NullMarked
public interface LinkClickHandler {
    void onLinkClicked(GURL url);
}
