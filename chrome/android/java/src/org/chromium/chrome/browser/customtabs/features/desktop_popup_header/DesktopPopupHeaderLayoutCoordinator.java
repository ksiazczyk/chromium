// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop popup header layout coordinator
// summary: Orchestrates creation of the desktop-specific Custom Tabs popup header by inflating the header layout via a ViewStub and wiring the mediator, property model, and view binder together.
// ---

package org.chromium.chrome.browser.customtabs.features.desktop_popup_header;

import android.content.Context;
import android.view.View;
import android.view.ViewStub;

import org.chromium.base.supplier.NullableObservableSupplier;
import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.tab.Tab;
import org.chromium.components.browser_ui.desktop_windowing.DesktopWindowStateManager;
import org.chromium.ui.modelutil.PropertyModel;
import org.chromium.ui.modelutil.PropertyModelChangeProcessor;

/**
 * Main class that orchestrates layout creation and changes for desktop-specific CCT header for
 * contextual web API popups.
 */
@NullMarked
public class DesktopPopupHeaderLayoutCoordinator {
    private final DesktopPopupHeaderMediator mMediator;
    private final PropertyModelChangeProcessor mPropertyModelChangeProcessor;

    public DesktopPopupHeaderLayoutCoordinator(
            ViewStub viewStub,
            DesktopWindowStateManager desktopWindowStateManager,
            NullableObservableSupplier<Tab> tabSupplier,
            boolean isIncognito,
            Context context) {
        viewStub.setLayoutResource(DesktopPopupHeaderUtils.getHeaderLayoutId());
        final View view = viewStub.inflate();

        PropertyModel model =
                new PropertyModel.Builder(DesktopPopupHeaderProperties.ALL_KEYS).build();

        mMediator =
                new DesktopPopupHeaderMediator(
                        model, desktopWindowStateManager, tabSupplier, context, isIncognito);

        mPropertyModelChangeProcessor =
                PropertyModelChangeProcessor.create(
                        model, view, DesktopPopupHeaderViewBinder::bind);
    }

    public void destroy() {
        mMediator.destroy();
        mPropertyModelChangeProcessor.destroy();
    }
}
