// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebChromeClient boundary interface
// summary: Boundary interface for WebChromeClientCompat that reports a received theme color for a WebView and inherits feature flag support.
// ---

package org.chromium.support_lib_boundary;

import android.graphics.Color;
import android.webkit.WebView;

import org.jspecify.annotations.NullMarked;

/** Boundary interface for WebChromeClientCompat. */
@NullMarked
public interface WebChromeClientBoundaryInterface extends FeatureFlagHolderBoundaryInterface {
    void onReceivedThemeColor(WebView view, Color color);
}
