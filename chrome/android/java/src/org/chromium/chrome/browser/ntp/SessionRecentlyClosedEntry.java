// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Session-based recently closed entry base class
// summary: Base class for recently closed entries from TabRestoreService, adding the session ID of the entry.
// ---

package org.chromium.chrome.browser.ntp;

import org.chromium.build.annotations.NullMarked;

/** Represents a recently closed entry from TabRestoreService. */
@NullMarked
public class SessionRecentlyClosedEntry extends RecentlyClosedEntry {

    private final int mSessionId;

    /**
     * @param sessionId The Session ID of this entry.
     * @param timestamp The milliseconds since the Unix Epoch this entry was created.
     */
    public SessionRecentlyClosedEntry(int sessionId, long timestamp) {
        super(timestamp);
        mSessionId = sessionId;
    }

    /**
     * @return the Session ID of the entry in TabRestoreService.
     */
    public int getSessionId() {
        return mSessionId;
    }
}
