// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ThinWebViewPrintingController interface for printing
// summary: Interface letting embedders implement printing support for ThinWebView WebContents so the component avoids a dependency on printing classes.
// ---

package org.chromium.components.thinwebview;

import org.chromium.build.annotations.NullMarked;
import org.chromium.content_public.browser.WebContents;

/**
 * Interface for handling printing for ThinWebView. The embedders can implement this elsewhere since
 * components/thin_webview shouldn't have a dependency on printing classes.
 */
@NullMarked
public interface ThinWebViewPrintingController {
    /** Returns whether printing is supported for the given WebContents. */
    boolean isPrintSupported(WebContents webContents);

    /** Starts the printing process for the given WebContents. */
    void startPrint(WebContents webContents);
}
