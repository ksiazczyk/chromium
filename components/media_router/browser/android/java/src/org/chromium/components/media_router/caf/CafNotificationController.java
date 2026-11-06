// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Presentation notification controller for Cast sessions
// summary: Notification controller for presentations that supplies the presentation notification ID and a content intent that brings the originating tab to the front.
// ---

package org.chromium.components.media_router.caf;

import static org.chromium.build.NullUtil.assumeNonNull;

import android.content.Intent;

import org.chromium.build.annotations.NullMarked;
import org.chromium.components.media_router.MediaRouterClient;

/** NotificationController implementation for presentation. */
@NullMarked
public class CafNotificationController extends BaseNotificationController {
    public CafNotificationController(BaseSessionController sessionController) {
        super(sessionController);
        sessionController.addCallback(this);
    }

    @Override
    public Intent createContentIntent() {
        return createBringTabToFrontIntent();
    }

    @Override
    public int getNotificationId() {
        return assumeNonNull(MediaRouterClient.getInstance()).getPresentationNotificationId();
    }
}
