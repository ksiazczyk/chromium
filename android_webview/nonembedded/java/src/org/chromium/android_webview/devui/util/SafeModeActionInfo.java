// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Holder for SafeMode action identifiers shown in the UI
// summary: Simple data class that holds the identifier of a SafeMode action for display in the WebView DevTools UI.
// ---

package org.chromium.android_webview.devui.util;

/** A class to hold the information needed for the UI about a SafeMode Action. */
public class SafeModeActionInfo {
    private final String mId;

    public SafeModeActionInfo(String id) {
        mId = id;
    }

    public String getId() {
        return mId;
    }
}
