// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CallbackBindCheckTest2
// summary: ErrorProne test fixture triggering CallbackBindCheck with a lambda block containing a single statement.
// ---

package org.chromium.tools.errorprone.plugin;

import org.chromium.base.Callback;

/** Test for CallbackBindCheck. */
public class CallbackBindCheckTest2 {
    public void testTrigger(Callback<Object> callback, String value) {
        // Trigger 2: Lambda block with single statement.
        Runnable r2 =
                () -> {
                    callback.onResult(value);
                };
    }
}
