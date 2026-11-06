// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Task to report newly captured content
// summary: Task that notifies the Android platform that captured content appeared by calling notifyViewAppeared for each data item.
// ---

package org.chromium.components.content_capture;

import android.view.autofill.AutofillId;

import org.chromium.build.annotations.NullMarked;
import org.chromium.components.content_capture.PlatformSession.PlatformSessionData;

/** The task to notify platform of the captured content */
@NullMarked
class ContentCapturedTask extends ProcessContentCaptureDataTask {
    public ContentCapturedTask(
            FrameSession session,
            ContentCaptureFrame contentCaptureData,
            PlatformSession platformSession) {
        super(session, contentCaptureData, platformSession);
    }

    @Override
    protected AutofillId notifyPlatform(
            PlatformSessionData parentPlatformSessionData, ContentCaptureDataBase data) {
        return notifyViewAppeared(parentPlatformSessionData, data);
    }
}
