// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestMediaRouteProviderService
// summary: Service that registers the TestMediaRouteProvider with the Android media router support library for use in cast emulator tests.
// ---

package org.chromium.components.media_router.cast_emulator;

import androidx.mediarouter.media.MediaRouteProvider;
import androidx.mediarouter.media.MediaRouteProviderService;

import org.chromium.base.Log;

/** Service for registering {@link TestMediaRouteProvider} using the support library. */
public class TestMediaRouteProviderService extends MediaRouteProviderService {
    private static final String TAG = "TestMRPService";

    @Override
    public MediaRouteProvider onCreateMediaRouteProvider() {
        Log.i(TAG, "creating TestMRP");
        return new TestMediaRouteProvider(this);
    }
}
