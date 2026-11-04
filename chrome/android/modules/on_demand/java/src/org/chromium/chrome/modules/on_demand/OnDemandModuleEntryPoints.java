// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OnDemandModuleEntryPoints interface for the on_demand module
// summary: Defines the base-split interface for the on_demand APK split, exposing the PDF entry point and Bricks coordinator creation via the ModuleInterface mechanism.
// ---

package org.chromium.chrome.modules.on_demand;

import android.content.Context;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.bricks.BricksCoordinatorInterface;
import org.chromium.chrome.browser.pdf.PdfEntryPoint;
import org.chromium.components.module_installer.builder.ModuleInterface;

/**
 * Interface for the implementation that lives inside the apk split (the interface itself lives in
 * the base split)
 */
@ModuleInterface(
        module = "on_demand",
        impl = "org.chromium.chrome.modules.on_demand.OnDemandModuleEntryPointsImpl")
@NullMarked
public interface OnDemandModuleEntryPoints {
    /** Used by internal Chrome builds. */
    @Nullable Object getInternalEntryPoints();

    /** Returns the PDF entry point. */
    PdfEntryPoint getPdfEntryPoint();

    /** Creates the Bricks coordinator. */
    BricksCoordinatorInterface createBricksCoordinator(Context context);

    /** Creates the Bricks coordinator for specified URL. */
    BricksCoordinatorInterface createBricksCoordinator(Context context, String url);
}
