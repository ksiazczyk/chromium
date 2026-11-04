// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ContactsPickerDelegateProvider
// summary: Static provider that wires the Chrome contacts picker delegate and the Android contacts permission provider into the shared picker components.
// ---

package org.chromium.chrome.browser.contacts_picker;

import org.chromium.build.annotations.NullMarked;
import org.chromium.components.browser_ui.contacts_picker.AndroidContactsPermissionProviderImpl;
import org.chromium.content_public.browser.ContactsDialogHost;
import org.chromium.content_public.browser.ContactsPicker;
import org.chromium.content_public.browser.ContactsPickerDelegate;

/** Provider for creating and initializing the {@link ContactsPickerDelegate}. */
@NullMarked
public final class ContactsPickerDelegateProvider {
    private ContactsPickerDelegateProvider() {}

    public static void initialize() {
        ContactsDialogHost.setPermissionProvider(new AndroidContactsPermissionProviderImpl());
        ContactsPicker.setContactsPickerDelegate(new ChromeContactsPickerDelegate());
    }
}
