// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DestructionObserver interface
// summary: Interface for objects registered through SuggestionsUiDelegate that get notified when their owner is destroyed.
// ---

package org.chromium.chrome.browser.suggestions;

import org.chromium.build.annotations.NullMarked;

/**
 * Object that is registered through the {@link SuggestionsUiDelegate}, and that will be notified
 * when its owner is destroyed.
 */
@NullMarked
public interface DestructionObserver {
    void onDestroy();
}
