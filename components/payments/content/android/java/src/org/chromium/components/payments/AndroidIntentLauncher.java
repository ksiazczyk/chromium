// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Interface for launching Android intent-based payment apps
// summary: Defines the interface for launching Android intent-based payment apps, with callbacks for errors and for the payment app's response.
// ---

package org.chromium.components.payments;

import android.content.Intent;

import org.chromium.base.Callback;
import org.chromium.build.annotations.NullMarked;
import org.chromium.ui.base.WindowAndroid;

/** The interface for launching Android intent-based payment apps. */
@NullMarked
public interface AndroidIntentLauncher {
    /**
     * Launch the payment app via an intent.
     *
     * @param intent The intent that includes the payment app identification and parameters.
     * @param errorCallback The callback that is invoked with a {@link PaymentAppError}, when
     *     invoking the payment app fails.
     * @param intentCallback The callback invoked when the payment app responds to the intent.
     */
    void launchPaymentApp(
            Intent intent,
            Callback<PaymentAppError> errorCallback,
            WindowAndroid.IntentCallback intentCallback);
}
