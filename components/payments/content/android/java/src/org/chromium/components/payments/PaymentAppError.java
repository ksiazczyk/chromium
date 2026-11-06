// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PaymentAppError
// summary: Error object bundling a payment event response type and a developer-facing error message for payment app failures.
// ---

package org.chromium.components.payments;

import org.chromium.build.annotations.NullMarked;
import org.chromium.payments.mojom.PaymentEventResponseType;

/** An error object for payment apps. */
@NullMarked
public class PaymentAppError {
    /** The response type of the error. */
    public final @PaymentEventResponseType.EnumType int responseType;

    /** The error message. */
    public final String errorMessage;

    /**
     * Builds a payment app error.
     *
     * @param responseType The response type of the error.
     * @param errorMessage The error message.
     */
    public PaymentAppError(
            @PaymentEventResponseType.EnumType int responseType, String errorMessage) {
        this.responseType = responseType;
        this.errorMessage = errorMessage;
    }
}
