// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: XSurfaceHooks interface
// summary: Java interface providing access to internal XSurface implementations, with an isEnabled check and a factory method for creating a ProcessScope from dependencies.
// ---

package org.chromium.chrome.browser.xsurface_provider.hooks;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.xsurface.ProcessScope;
import org.chromium.chrome.browser.xsurface.ProcessScopeDependencyProvider;

/** Provides access to internal XSurface implementations, if they are available. */
@NullMarked
public interface XSurfaceHooks {
    /** Whether the internal implementations of XSurface interfaces are available.*/
    default boolean isEnabled() {
        return false;
    }

    /** Creates and returns a {@link ProcessScope}. */
    ProcessScope createProcessScope(ProcessScopeDependencyProvider dependencies);
}
