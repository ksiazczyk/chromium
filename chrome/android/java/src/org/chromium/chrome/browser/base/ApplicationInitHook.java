// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ApplicationInitHook interface for attachBaseContext initialization
// summary: ServiceLoader interface that internal code implements to run logic during attachBaseContext for browser and isolated processes.
// ---

package org.chromium.chrome.browser.base;

import org.chromium.build.annotations.NullMarked;

/** ServiceLoader hook for internal code to run during attachBaseContext(). */
@NullMarked
public interface ApplicationInitHook {
    void onAttachBaseContext(boolean isBrowserProcess, boolean isIsolatedProcess);
}
