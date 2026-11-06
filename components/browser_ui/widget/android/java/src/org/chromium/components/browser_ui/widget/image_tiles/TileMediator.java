// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TileMediator – event mediator for the tiles UI
// summary: Mediator for the tiles UI that reacts to outside events, forwards tile clicks to a callback, fetches tile visuals, and records UMA user actions and histograms.
// ---

package org.chromium.components.browser_ui.widget.image_tiles;

import android.graphics.Bitmap;

import org.chromium.base.Callback;
import org.chromium.base.metrics.RecordHistogram;
import org.chromium.base.metrics.RecordUserAction;
import org.chromium.build.annotations.NullMarked;
import org.chromium.components.browser_ui.widget.image_tiles.ImageTileCoordinator.TileVisualsProvider;

import java.util.List;

/**
 * The mediator for the tiles UI, responsible for reacting to events from outside world, and
 * interacting with other coordinators.
 */
@NullMarked
class TileMediator {
    private final TileListModel mModel;
    private final TileConfig mConfig;
    private final Callback<ImageTile> mTileClickCallback;
    private final TileVisualsProvider mTileVisualsProvider;

    /** Constructor. */
    public TileMediator(
            TileConfig config,
            TileListModel model,
            Callback<ImageTile> tileClickCallback,
            TileVisualsProvider visualsProvider) {
        mModel = model;
        mConfig = config;
        mTileClickCallback = tileClickCallback;
        mTileVisualsProvider = visualsProvider;

        mModel.getProperties().set(TileListProperties.CLICK_CALLBACK, this::onTileClicked);
        mModel.getProperties().set(TileListProperties.VISUALS_CALLBACK, this::getVisuals);
    }

    private void onTileClicked(ImageTile tile) {
        RecordUserAction.record("Search." + mConfig.umaPrefix + ".Tile.Clicked");
        mTileClickCallback.onResult(tile);
    }

    private void getVisuals(ImageTile tile, Callback<List<Bitmap>> callback) {
        mTileVisualsProvider.getVisuals(
                tile,
                visuals -> {
                    boolean visualsAvailable = visuals != null && !visuals.isEmpty();
                    recordTileVisuals(visualsAvailable);
                    callback.onResult(visuals);
                });
    }

    private void recordTileVisuals(boolean visualsAvailable) {
        RecordHistogram.recordBooleanHistogram(
                "Search." + mConfig.umaPrefix + ".Bitmap.Available", visualsAvailable);
    }
}
