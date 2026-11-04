// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CustomTabOpenInAppEntryPoint
// summary: Entry point for the Open in App feature in the Custom Tab activity, extending the base OpenInAppEntryPoint class.
// ---

package org.chromium.chrome.browser.open_in_app;

import android.content.Context;

import org.chromium.base.supplier.NullableObservableSupplier;
import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.tab.Tab;

/** Entry point for Open in App in Custom Tab activity. */
@NullMarked
public class CustomTabOpenInAppEntryPoint extends OpenInAppEntryPoint {
    public CustomTabOpenInAppEntryPoint(
            NullableObservableSupplier<Tab> tabSupplier, Context context) {
        super(tabSupplier, context);
    }
}
