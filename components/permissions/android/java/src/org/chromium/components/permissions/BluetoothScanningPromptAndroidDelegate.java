// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BluetoothScanningPromptAndroidDelegate
// summary: Interface providing embedder-level information, such as an autocomplete scheme classifier, to the Bluetooth scanning permission dialog.
// ---

package org.chromium.components.permissions;

import org.chromium.build.annotations.NullMarked;
import org.chromium.components.omnibox.AutocompleteSchemeClassifier;

/**  Provides embedder-level information to {@link BluetoothScanningPermissionDialog}. */
@NullMarked
public interface BluetoothScanningPromptAndroidDelegate {
    /**
     * Creates a new {@link AutoCompleteSchemeClassifier}. After use
     * {@link AutoCompleteSchemeClassifier#destroy()} must be called to delete the native object.
     */
    AutocompleteSchemeClassifier createAutocompleteSchemeClassifier();
}
