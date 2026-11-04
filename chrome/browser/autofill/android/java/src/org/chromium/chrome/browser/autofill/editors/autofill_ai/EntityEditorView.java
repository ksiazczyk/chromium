// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Entity editor dialog view for Autofill AI
// summary: Dialog view for editing Autofill AI entities such as passports and identity cards, extending the common editor view base.
// ---

package org.chromium.chrome.browser.autofill.editors.autofill_ai;

import androidx.fragment.app.FragmentActivity;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.autofill.editors.common.EditorViewBase;

/** The entity editor dialog. Can be used for editing passports, identity cards, etc. */
@NullMarked
public class EntityEditorView extends EditorViewBase {
    /**
     * Builds the editor dialog.
     *
     * @param activity The activity on top of which the UI should be displayed.
     * @param fragmentManager FragmentManager for displaying dialogs.
     */
    public EntityEditorView(FragmentActivity activity) {
        super(activity, activity.getSupportFragmentManager());
    }
}
