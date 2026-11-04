// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'PaneOrderController: interface for Hub pane ordering'
// summary: Interface that returns an ordered set of PaneId values representing the order of panes shown in the Hub.
// ---

package org.chromium.chrome.browser.hub;

import com.google.common.collect.ImmutableSet;

import org.chromium.build.annotations.NullMarked;

/** Interface for specifying the order of {@link Pane}s in the Hub. */
@NullMarked
public interface PaneOrderController {
    /** Returns an ordered set of {@link PaneId} representing the order of Panes in the Hub. */
    ImmutableSet<Integer> getPaneOrder();
}
