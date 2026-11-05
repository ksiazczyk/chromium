// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Most Visited Tile View Properties
// summary: Defines the property keys recognized by omnibox most visited tiles by combining tile view properties with common suggestion properties.
// ---

package org.chromium.chrome.browser.omnibox.suggestions.mostvisited;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.omnibox.suggestions.SuggestionCommonProperties;
import org.chromium.components.browser_ui.widget.tile.TileViewProperties;
import org.chromium.ui.modelutil.PropertyKey;
import org.chromium.ui.modelutil.PropertyModel;

/** List of properties recognized by Omnibox MostVisitedTiles. */
@NullMarked
public interface MostVisitedTileViewProperties {
    PropertyKey[] ALL_KEYS =
            PropertyModel.concatKeys(
                    TileViewProperties.ALL_KEYS, SuggestionCommonProperties.ALL_KEYS);
}
