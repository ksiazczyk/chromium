// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Abstract loader for WebView crash information
// summary: Abstract base class defining loadCrashesInfo, which subclasses implement to collect lists of WebView crash info from different sources.
// ---

package org.chromium.android_webview.devui.util;

import org.chromium.android_webview.nonembedded.crash.CrashInfo;

import java.util.List;

/** An abstract class that collects info about WebView crashes. */
public abstract class CrashInfoLoader {
    /**
     * Loads all crashes info from source.
     *
     * @return list of crashes info.
     */
    public abstract List<CrashInfo> loadCrashesInfo();
}
