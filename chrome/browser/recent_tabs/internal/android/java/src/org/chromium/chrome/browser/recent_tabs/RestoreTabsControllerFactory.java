// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Restore Tabs controller factory
// summary: Factory that creates a RestoreTabsController, using a dialog-based implementation on XR devices and a bottom sheet implementation otherwise.
// ---

package org.chromium.chrome.browser.recent_tabs;

import android.content.Context;

import org.chromium.base.DeviceInfo;
import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.chrome.browser.tabmodel.TabCreatorManager;
import org.chromium.components.browser_ui.bottomsheet.BottomSheetController;
import org.chromium.ui.modaldialog.ModalDialogManager;

/** A factory interface for building a RestoreTabsController instance. */
@NullMarked
public class RestoreTabsControllerFactory {
    /**
     * @return An instance of RestoreTabsController.
     */
    public static RestoreTabsController createInstance(
            Context context,
            Profile profile,
            TabCreatorManager tabCreatorManager,
            BottomSheetController bottomSheetController,
            ModalDialogManager modalDialogManager) {

        if (DeviceInfo.isXr()) {
            return new RestoreTabsDialogControllerImpl(
                    context, profile, tabCreatorManager, modalDialogManager);
        }

        return new RestoreTabsControllerImpl(
                context, profile, tabCreatorManager, bottomSheetController);
    }
}
