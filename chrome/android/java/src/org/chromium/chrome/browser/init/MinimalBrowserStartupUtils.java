// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MinimalBrowserStartupUtils
// summary: Helper class for features that can run in minimal browser mode, defining a servicification startup task tag constant.
// ---

package org.chromium.chrome.browser.init;

import org.chromium.build.annotations.NullMarked;

/** Helper class for features that can be run in the minimal browser mode. */
@NullMarked
public class MinimalBrowserStartupUtils {
    public static final String TASK_TAG = "Servicification Startup Task";
}
