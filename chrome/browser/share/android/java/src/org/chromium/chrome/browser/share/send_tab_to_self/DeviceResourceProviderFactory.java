// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Factory for device icon resource providers
// summary: Creates a DeviceResourceProvider through service loading and falls back to the upstream implementation when none is available.
// ---

package org.chromium.chrome.browser.share.send_tab_to_self;

import org.chromium.base.ServiceLoaderUtil;
import org.chromium.build.annotations.NullMarked;

/** Factory for creating {@link DeviceResourceProvider}. */
@NullMarked
public class DeviceResourceProviderFactory {
    /**
     * Creates an instance of {@link DeviceResourceProvider}.
     *
     * @return {@link DeviceResourceProvider}
     */
    public static DeviceResourceProvider create() {
        DeviceResourceProvider provider =
                ServiceLoaderUtil.maybeCreate(DeviceResourceProvider.class);
        if (provider == null) {
            provider = new DeviceResourceProviderUpstreamImpl();
        }
        return provider;
    }
}
