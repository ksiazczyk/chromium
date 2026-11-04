// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'OverlayPanelStateProvider: interface for overlay panel state'
// summary: Interface for observing overlay panel state and background color changes and querying whether the panel covers the full screen width.
// ---

package org.chromium.chrome.browser.compositor.overlay_panel;

import androidx.annotation.ColorInt;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.overlay_panel.PanelState;

@NullMarked
public interface OverlayPanelStateProvider {
    /** An observer to be notified of changes to the overlay panel. */
    interface Observer {
        /**
         * Called when the {@link PanelState} state of the Overlay Panel changes.
         *
         * @param state The {@link PanelState} of the overlay panel.
         * @param color The background color of the overlay panel.
         */
        default void onOverlayPanelStateChanged(@PanelState int state, @ColorInt int color) {}
    }

    /**
     * Add an observer to be notified of changes to the overlay panel.
     *
     * @param observer The observer to add.
     */
    void addObserver(Observer observer);

    /**
     * Remove a previously added observer.
     *
     * @param observer The observer to remove.
     */
    void removeObserver(Observer observer);

    /**
     * @return True if the overlay panel covers the full width of the screen, false if the panel
     *     only partially extends across the screen.
     */
    boolean isFullWidthSizePanel();
}
