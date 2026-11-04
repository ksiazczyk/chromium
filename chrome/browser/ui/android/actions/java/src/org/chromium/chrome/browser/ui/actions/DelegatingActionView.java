// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DelegatingActionView
// summary: Interface for views that delegate action properties to a target view returned by getTargetView.
// ---

package org.chromium.chrome.browser.ui.actions;

import android.view.View;

import org.chromium.build.annotations.NullMarked;

/** Interface for views that delegate action properties to a target view. */
@NullMarked
public interface DelegatingActionView {
    /** Returns the target view that should receive action properties. */
    View getTargetView();
}
