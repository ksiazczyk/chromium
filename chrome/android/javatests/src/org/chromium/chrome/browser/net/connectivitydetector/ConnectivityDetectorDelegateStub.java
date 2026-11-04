// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ConnectivityDetectorDelegateStub
// summary: Stub implementation of ConnectivityDetector.Delegate that provides a configurable connection state and HTTP probe skipping for use in tests.
// ---

package org.chromium.chrome.browser.net.connectivitydetector;

/** Stub of ConnectivityDetector.Delegate for testing purpose. */
public class ConnectivityDetectorDelegateStub implements ConnectivityDetector.Delegate {
    private @ConnectivityDetector.ConnectionState int mConnectionStateFromSystem;
    private final boolean mSkipHttpProbes;

    public ConnectivityDetectorDelegateStub(
            @ConnectivityDetector.ConnectionState int connectionStateFromSystem,
            boolean skipHttpProbes) {
        mConnectionStateFromSystem = connectionStateFromSystem;
        mSkipHttpProbes = skipHttpProbes;
    }

    @Override
    public @ConnectivityDetector.ConnectionState int inferConnectionStateFromSystem() {
        return mConnectionStateFromSystem;
    }

    @Override
    public boolean shouldSkipHttpProbes() {
        return mSkipHttpProbes;
    }

    public void setConnectionStateFromSystem(
            @ConnectivityDetector.ConnectionState int connectionStateFromSystem) {
        mConnectionStateFromSystem = connectionStateFromSystem;
    }
}
