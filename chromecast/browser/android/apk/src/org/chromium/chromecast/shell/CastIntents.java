// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CastIntents
// summary: Holds constants for the public intent actions used to control the lifecycle of CastWebContentsActivity, such as stopping web content.
// ---

package org.chromium.chromecast.shell;

/**
 * A namespace for constants to uniquely describe certain public Intents that can be used to control
 * the life cycle of CastWebContentsActivity.
 */
public class CastIntents {
    /**
     * Used by CastWebContentsComponent to tell CastWebContentsSurfaceHelper to tear down the web
     * contents.
     */
    public static final String ACTION_STOP_WEB_CONTENT = "com.google.assistant.STOP_WEB_CONTENT";

    public static final String ACTION_START_CAST_BROWSER =
            "com.google.cast.action.START_CAST_BROWSER";
}
