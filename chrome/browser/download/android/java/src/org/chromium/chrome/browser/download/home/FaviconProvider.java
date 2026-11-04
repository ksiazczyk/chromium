// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FaviconProvider interface
// summary: Interface for fetching the favicon bitmap for a given URL at a requested pixel size.
// ---

package org.chromium.chrome.browser.download.home;

import android.graphics.Bitmap;

import org.chromium.base.Callback;
import org.chromium.build.annotations.NullMarked;

/** Responsible for providing favicon for a given URL. */
@NullMarked
public interface FaviconProvider {
    /** Destroys the native component. */
    void destroy();

    /**
     * Fetches favicon for the given URL.
     *
     * @param url The associated URL.
     * @param faviconSizePx The desired size of the favicon in pixels.
     * @param callback The callback to be run after the favicon is fetched.
     */
    void getFavicon(String url, int faviconSizePx, Callback<Bitmap> callback);
}
