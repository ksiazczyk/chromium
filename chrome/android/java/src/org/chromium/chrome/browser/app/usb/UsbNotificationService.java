// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UsbNotificationService
// summary: Android service entry point that extends SplitCompatService and dispatches WebUSB notification handling to the UsbNotificationServiceImpl class.
// ---

package org.chromium.chrome.browser.app.usb;

import org.chromium.base.SplitCompatService;
import org.chromium.build.annotations.IdentifierNameString;
import org.chromium.build.annotations.NullMarked;

/** See {@link UsbNotificationServiceImpl}. */
@NullMarked
public class UsbNotificationService extends SplitCompatService {
    @SuppressWarnings("FieldCanBeFinal") // @IdentifierNameString requires non-final
    private static @IdentifierNameString String sImplClassName =
            "org.chromium.chrome.browser.app.usb.UsbNotificationServiceImpl";

    public UsbNotificationService() {
        super(sImplClassName);
    }
}
