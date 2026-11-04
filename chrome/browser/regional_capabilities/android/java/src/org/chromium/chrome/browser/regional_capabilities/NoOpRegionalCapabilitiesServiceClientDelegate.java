// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NoOpRegionalCapabilitiesServiceClientDelegate
// summary: Placeholder delegate implementation for public code that reports the default regional program as the device program.
// ---

package org.chromium.chrome.browser.regional_capabilities;

import androidx.annotation.MainThread;

import org.chromium.base.ThreadUtils;
import org.chromium.build.annotations.NullMarked;
import org.chromium.components.regional_capabilities.RegionalProgram;

/** Placeholder implementation for public code. */
@NullMarked
public class NoOpRegionalCapabilitiesServiceClientDelegate
        implements RegionalCapabilitiesServiceClientDelegate {
    @MainThread
    public NoOpRegionalCapabilitiesServiceClientDelegate() {
        ThreadUtils.assertOnUiThread();
    }

    @Override
    @MainThread
    public @RegionalProgram int getDeviceProgram() {
        return RegionalProgram.DEFAULT;
    }
}
