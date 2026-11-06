// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: StorageInfo
// summary: Java model holding a host's storage usage and clearing that site's storage data through the website preference bridge.
// ---

package org.chromium.components.browser_ui.site_settings;

import androidx.annotation.VisibleForTesting;

import org.chromium.build.annotations.NullMarked;
import org.chromium.components.browser_ui.site_settings.WebsitePreferenceBridge.StorageInfoClearedCallback;
import org.chromium.content_public.browser.BrowserContextHandle;

import java.io.Serializable;

/** Storage information for a given host URL. */
@NullMarked
public class StorageInfo implements Serializable {
    private final String mHost;
    private final long mSize;

    @VisibleForTesting
    public StorageInfo(String host, long size) {
        mHost = host;
        mSize = size;
    }

    public String getHost() {
        return mHost;
    }

    public void clear(
            BrowserContextHandle browserContextHandle, StorageInfoClearedCallback callback) {
        WebsitePreferenceBridgeJni.get().clearStorageData(browserContextHandle, mHost, callback);
    }

    public long getSize() {
        return mSize;
    }
}
