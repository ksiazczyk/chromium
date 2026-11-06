// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DisplayStyleObserver interface
// summary: Interface for objects that receive callbacks when the display style of a UiConfig changes.
// ---

package org.chromium.components.browser_ui.widget.displaystyle;

import org.chromium.build.annotations.NullMarked;

/**
 * Gets notified of changes in the display style.
 *
 * @see UiConfig.DisplayStyle
 * @see UiConfig#getCurrentDisplayStyle()
 * @see DisplayStyleObserverAdapter
 */
@NullMarked
public interface DisplayStyleObserver {
    void onDisplayStyleChanged(UiConfig.DisplayStyle newDisplayStyle);
}
