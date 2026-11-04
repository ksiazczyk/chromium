// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill save IBAN bottom sheet properties
// summary: Defines the property keys of the save IBAN bottom sheet model, such as title, IBAN value, button labels, click actions, and legal message.
// ---

package org.chromium.chrome.browser.autofill.iban;

import android.view.View.OnClickListener;

import org.chromium.build.annotations.NullMarked;
import org.chromium.components.autofill.payments.LegalMessage;
import org.chromium.ui.modelutil.PropertyKey;
import org.chromium.ui.modelutil.PropertyModel.ReadableIntPropertyKey;
import org.chromium.ui.modelutil.PropertyModel.ReadableObjectPropertyKey;

@NullMarked
/*package*/ class AutofillSaveIbanBottomSheetProperties {
    static final ReadableIntPropertyKey LOGO_ICON = new ReadableIntPropertyKey();

    static final ReadableObjectPropertyKey<String> TITLE = new ReadableObjectPropertyKey<>();

    static final ReadableObjectPropertyKey<String> DESCRIPTION = new ReadableObjectPropertyKey<>();

    static final ReadableObjectPropertyKey<String> IBAN_VALUE = new ReadableObjectPropertyKey<>();

    static final ReadableObjectPropertyKey<String> ACCEPT_BUTTON_LABEL =
            new ReadableObjectPropertyKey<>();

    static final ReadableObjectPropertyKey<String> CANCEL_BUTTON_LABEL =
            new ReadableObjectPropertyKey<>();

    static final ReadableObjectPropertyKey<OnClickListener> ON_ACCEPT_BUTTON_CLICK_ACTION =
            new ReadableObjectPropertyKey<>();

    static final ReadableObjectPropertyKey<OnClickListener> ON_CANCEL_BUTTON_CLICK_ACTION =
            new ReadableObjectPropertyKey<>();

    static final ReadableObjectPropertyKey<LegalMessage> LEGAL_MESSAGE =
            new ReadableObjectPropertyKey<>();

    static final PropertyKey[] ALL_KEYS = {
        LOGO_ICON,
        TITLE,
        DESCRIPTION,
        IBAN_VALUE,
        ACCEPT_BUTTON_LABEL,
        CANCEL_BUTTON_LABEL,
        ON_ACCEPT_BUTTON_CLICK_ACTION,
        ON_CANCEL_BUTTON_CLICK_ACTION,
        LEGAL_MESSAGE,
    };

    /** Do not instantiate. */
    private AutofillSaveIbanBottomSheetProperties() {}
}
