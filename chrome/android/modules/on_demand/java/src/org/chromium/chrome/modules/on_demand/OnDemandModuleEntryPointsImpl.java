// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OnDemandModuleEntryPointsImpl implementation in the APK split
// summary: Implements OnDemandModuleEntryPoints inside the APK split, providing the PDF entry point and creating Bricks or BricksJava coordinators depending on the URL.
// ---

package org.chromium.chrome.modules.on_demand;

import android.content.Context;

import org.chromium.base.ServiceLoaderUtil;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.build.annotations.UsedByReflection;
import org.chromium.chrome.browser.bricks.BricksCoordinator;
import org.chromium.chrome.browser.bricks.BricksCoordinatorInterface;
import org.chromium.chrome.browser.bricks.BricksJavaCoordinator;
import org.chromium.chrome.browser.pdf.PdfEntryPoint;
import org.chromium.chrome.browser.pdf.PdfEntryPointImpl;
import org.chromium.components.embedder_support.util.UrlConstants;

/** Entry points implementation that lives inside the apk split. */
@NullMarked
@UsedByReflection("SplitChromeApplication.java")
public class OnDemandModuleEntryPointsImpl implements OnDemandModuleEntryPoints {
    @Override
    public @Nullable Object getInternalEntryPoints() {
        return ServiceLoaderUtil.maybeCreate(OnDemandModuleInternalEntryPoints.class);
    }

    @Override
    public PdfEntryPoint getPdfEntryPoint() {
        return new PdfEntryPointImpl();
    }

    @Override
    public BricksCoordinatorInterface createBricksCoordinator(Context context) {
        return new BricksCoordinator(context);
    }

    @Override
    public BricksCoordinatorInterface createBricksCoordinator(Context context, String url) {
        if (url != null && url.contains(UrlConstants.BRICKS_JAVA_HOST)) {
            return new BricksJavaCoordinator(context);
        }
        return new BricksCoordinator(context);
    }
}
