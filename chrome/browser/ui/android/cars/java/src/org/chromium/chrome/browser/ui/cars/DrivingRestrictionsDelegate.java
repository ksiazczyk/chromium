// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DrivingRestrictionsDelegate abstract base class
// summary: Abstract base class exposing methods to start and stop driving restriction monitoring and notify a callback about required optimizations.
// ---

package org.chromium.chrome.browser.ui.cars;

import org.chromium.base.Callback;
import org.chromium.build.annotations.NullMarked;

/** Base class that exposes methods for starting and stopping monitoring. */
@NullMarked
public abstract class DrivingRestrictionsDelegate {
    private final Callback<Boolean> mRequiresDrivingOptimizationsCallback;

    DrivingRestrictionsDelegate(Callback<Boolean> requiresDrivingOptimizationsCallback) {
        mRequiresDrivingOptimizationsCallback = requiresDrivingOptimizationsCallback;
    }

    abstract void startMonitoring();

    abstract void stopMonitoring();

    protected void notifyCallback(boolean requiresOptimization) {
        mRequiresDrivingOptimizationsCallback.onResult(requiresOptimization);
    }
}
