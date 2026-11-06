// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExpandedSheetHelper interface for sheet expansion events
// summary: Interface for notifying other UI when a bottom sheet enters or leaves expanded mode.
// ---

package org.chromium.components.browser_ui.bottomsheet;

import org.chromium.build.annotations.NullMarked;

/** Handles interaction with other UI's when a bottom sheet goes in and out of expanded mode. */
@NullMarked
public interface ExpandedSheetHelper {
    /** Sheet gets expanded. */
    void onSheetExpanded();

    /** Sheet gets collapsed. */
    void onSheetCollapsed();
}
