// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MediaStatusObserver interface for status updates
// summary: Interface for subscribing to MediaStatus updates, delivering a MediaStatusBridge to its single implementer FlingingControllerBridge.
// ---

package org.chromium.components.media_router;

import org.chromium.build.annotations.NullMarked;

/** Interface to subscribe to MediaStatus updates. */
@NullMarked
public interface MediaStatusObserver {
    /**
     * Called when there is a MediaStatus update. NOTE: At the moment, FlingingControllerBridge is
     * the only implementer. Sending a MediaStatusBridge directly reduces boilerplate code. If a
     * second implementer were added, adding a ChromeMediaStatus interface and using here instead
     * might make more sense.
     */
    void onMediaStatusUpdate(MediaStatusBridge status);
}
