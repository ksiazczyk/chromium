// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExtensionWindowControllerBridgeFactory
// summary: Factory that creates ExtensionWindowControllerBridge instances, returning the internal implementation and mirroring the nullable stub factory contract.
// ---

package org.chromium.chrome.browser.ui.extensions.windowing;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Factory for creating an {@link ExtensionWindowControllerBridge}. */
@NullMarked
public final class ExtensionWindowControllerBridgeFactory {
    private ExtensionWindowControllerBridgeFactory() {}

    // Mark as nullable to be consistent with the stub factory in
    // //chrome/browser/ui/android/extensions/windowing/stub.
    @Nullable
    public static ExtensionWindowControllerBridge create() {
        return new ExtensionWindowControllerBridgeImpl();
    }
}
