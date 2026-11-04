// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BluetoothNotificationService
// summary: Android service entry point extending SplitCompatService that loads the BluetoothNotificationServiceImpl implementation for Web Bluetooth notifications.
// ---

package org.chromium.chrome.browser.app.bluetooth;

import org.chromium.base.SplitCompatService;
import org.chromium.build.annotations.IdentifierNameString;
import org.chromium.build.annotations.NullMarked;

/** See {@link BluetoothNotificationServiceImpl}. */
@NullMarked
public class BluetoothNotificationService extends SplitCompatService {
    @SuppressWarnings("FieldCanBeFinal") // @IdentifierNameString requires non-final
    private static @IdentifierNameString String sImplClassName =
            "org.chromium.chrome.browser.app.bluetooth.BluetoothNotificationServiceImpl";

    public BluetoothNotificationService() {
        super(sImplClassName);
    }
}
