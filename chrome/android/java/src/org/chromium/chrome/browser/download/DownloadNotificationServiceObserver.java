// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Observer forwarding service events to the notification service
// summary: Forwards foreground service task removal and destruction events to DownloadNotificationService via reflection registration.
// ---

package org.chromium.chrome.browser.download;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.UsedByReflection;

/** A DownloadForegroundServiceObservers.Observer implementation for DownloadNotificationService. */
@UsedByReflection("DownloadForegroundServiceObservers")
@NullMarked
public class DownloadNotificationServiceObserver
        implements DownloadForegroundServiceObservers.Observer {
    @UsedByReflection("DownloadForegroundServiceObservers")
    public DownloadNotificationServiceObserver() {}

    @Override
    public void onForegroundServiceTaskRemoved() {
        DownloadNotificationService.getInstance().onForegroundServiceTaskRemoved();
    }

    @Override
    public void onForegroundServiceDestroyed() {
        DownloadNotificationService.getInstance().onForegroundServiceDestroyed();
    }
}
