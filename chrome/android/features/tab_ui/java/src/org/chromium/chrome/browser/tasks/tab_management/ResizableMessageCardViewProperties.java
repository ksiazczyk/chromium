// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Resizable message card view properties
// summary: Defines the property keys for the resizable tab grid message item, including its width and the combined list of all keys.
// ---

package org.chromium.chrome.browser.tasks.tab_management;

import org.chromium.build.annotations.NullMarked;
import org.chromium.ui.modelutil.PropertyKey;
import org.chromium.ui.modelutil.PropertyModel;

/** List of properties used by TabGridSecondaryItem. */
@NullMarked
public class ResizableMessageCardViewProperties {
    public static final PropertyModel.WritableIntPropertyKey WIDTH =
            new PropertyModel.WritableIntPropertyKey();

    private static final PropertyKey[] KEYS = new PropertyKey[] {WIDTH};
    public static final PropertyKey[] ALL_KEYS =
            PropertyModel.concatKeys(KEYS, MessageCardViewProperties.ALL_KEYS);
}
