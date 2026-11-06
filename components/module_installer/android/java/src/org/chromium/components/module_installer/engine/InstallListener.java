// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Listener for dynamic feature module installs
// summary: Interface whose onComplete callback reports whether a dynamic feature module install finished successfully.
// ---

package org.chromium.components.module_installer.engine;

import org.chromium.build.annotations.NullMarked;

/** Broadcast listener for dynamic feature module installs. */
@NullMarked
public interface InstallListener {
    /**
     * Called when the install has completed.
     *
     * @param success True if the module was installed successfully.
     */
    void onComplete(boolean success);
}
