// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwLocaleConfig
// summary: Provides access to the array of supported uncompressed pak locales used by WebView.
// relations:
//   - references /android_webview/BUILD.gn
// ---

package org.chromium.android_webview;

import org.chromium.build.annotations.NullMarked;

/**
 * Simple class that provides access to the array of uncompressed pak locales. See
 * //android_webview/BUILD.gn for more details.
 */
@NullMarked
public final class AwLocaleConfig {
    private AwLocaleConfig() {}

    public static String[] getWebViewSupportedPakLocales() {
        return ProductConfig.LOCALES;
    }
}
