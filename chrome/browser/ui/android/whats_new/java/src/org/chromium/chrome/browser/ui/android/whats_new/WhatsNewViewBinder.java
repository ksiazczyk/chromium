// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: What's New view binder
// summary: Binds the What's New property model to the bottom sheet content by forwarding view state changes.
// ---

package org.chromium.chrome.browser.ui.android.whats_new;

import org.chromium.build.annotations.NullMarked;
import org.chromium.ui.modelutil.PropertyKey;
import org.chromium.ui.modelutil.PropertyModel;

@NullMarked
public class WhatsNewViewBinder {
    static void bind(
            PropertyModel model, WhatsNewBottomSheetContent view, PropertyKey propertyKey) {
        if (propertyKey == WhatsNewProperties.VIEW_STATE) {
            view.setViewState(model.get(WhatsNewProperties.VIEW_STATE));
        }
    }
}
