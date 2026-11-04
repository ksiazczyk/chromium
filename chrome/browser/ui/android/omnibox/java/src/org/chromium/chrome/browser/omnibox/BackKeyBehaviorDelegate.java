// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BackKeyBehaviorDelegate
// summary: Functional interface that lets implementers override the LocationBar's default back key handling.
// ---

package org.chromium.chrome.browser.omnibox;

import org.chromium.build.annotations.NullMarked;

/**
 * Delegate interface that allows implementers to override the default back key behavior of the
 * LocationBar.
 */
@NullMarked
@FunctionalInterface
public interface BackKeyBehaviorDelegate {
    /** Returns true if the delegate will handle the back key event. */
    boolean handleBackKeyPressed();
}
