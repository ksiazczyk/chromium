// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ModalDialogFeatureList
// summary: Declares the names of modal dialog feature flags exposed to Java and kept in sync with the native feature map.
// ---

package org.chromium.components.browser_ui.modaldialog;

import org.chromium.build.annotations.NullMarked;

/**
 * Lists base::Features that can be accessed through {@link ModalDialogFeatureMap}.
 *
 * <p>Should be kept in sync with |kFeaturesExposedToJava| in
 * //components/browser_ui/modaldialog/android/modaldialog_feature_map.cc
 */
@NullMarked
public abstract class ModalDialogFeatureList {
    public static final String DIALOGS_ON_LARGE_FORM_FACTORS = "DialogsOnLargeFormFactors";
    public static final String MODAL_DIALOG_LAYOUT_WITH_SYSTEM_INSETS =
            "ModalDialogLayoutWithSystemInsets";
}
