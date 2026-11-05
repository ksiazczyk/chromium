// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ActivatableSuggestionView interface
// summary: Interface for omnibox suggestion views that can be activated with modifier keys such as Alt, Shift, or Ctrl.
// ---

package org.chromium.chrome.browser.omnibox.suggestions;

import org.chromium.build.annotations.NullMarked;

/** Interface for suggestion views that can be activated with modifier keys. */
@NullMarked
public interface ActivatableSuggestionView {
    /**
     * Activates the suggestion view with the given modifier keys.
     *
     * @param modifiers The meta state of modifier keys (e.g., Alt, Shift, Ctrl).
     * @return True if the activation was handled.
     */
    boolean activate(int modifiers);
}
