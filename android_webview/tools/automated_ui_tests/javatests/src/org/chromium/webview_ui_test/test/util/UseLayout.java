// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: UseLayout annotation for WebView UI tests
// summary: Defines a runtime annotation that tells WebViewUiTestRule which layout to launch the test activity with.
// ---

package org.chromium.webview_ui_test.test.util;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/** UseLayout annotation is used to inform WebViewUiTestRule to launch activity with specific layout */
// TODO(yolandyan): enable Parametrized test with layout, write one test, run in multiple layouts
@Retention(RetentionPolicy.RUNTIME)
public @interface UseLayout {
    String value();
}
