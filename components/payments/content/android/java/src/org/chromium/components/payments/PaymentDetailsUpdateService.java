// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PaymentDetailsUpdateService
// summary: Thin SplitCompatService shell in the base module that delegates the payment details update service lifecycle to the implementation in the chrome split.
// ---

package org.chromium.components.payments;

import org.chromium.base.SplitCompatService;
import org.chromium.build.annotations.IdentifierNameString;
import org.chromium.build.annotations.NullMarked;

/**
 * Thin shell for PaymentDetailsUpdateService that resides in the base module. It delegates all
 * service lifecycles to PaymentDetailsUpdateServiceImpl in the chrome split.
 */
@NullMarked
public class PaymentDetailsUpdateService extends SplitCompatService {
    @SuppressWarnings("FieldCanBeFinal") // @IdentifierNameString requires non-final
    private static @IdentifierNameString String sImplClassName =
            "org.chromium.components.payments.PaymentDetailsUpdateServiceImpl";

    public PaymentDetailsUpdateService() {
        super(sImplClassName);
    }
}
