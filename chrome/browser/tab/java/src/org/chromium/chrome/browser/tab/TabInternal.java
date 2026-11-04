// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabInternal interface for package-private tab state
// summary: Package-private interface exposing internal TabImpl state, such as the native pointer, to classes in the tab package without widening the public Tab API.
// ---

package org.chromium.chrome.browser.tab;

import org.chromium.build.annotations.NullMarked;

/**
 * Interface to expose package-private internal state of {@link TabImpl} to other classes in the
 * {@code org.chromium.chrome.browser.tab} package without exposing them on the public {@link Tab}
 * interface.
 */
@NullMarked
interface TabInternal {
    /** Returns the native pointer representing the native side of this tab. */
    long getNativePtr();
}
