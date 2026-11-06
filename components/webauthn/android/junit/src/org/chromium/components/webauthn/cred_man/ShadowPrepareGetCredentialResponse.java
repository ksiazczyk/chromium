// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ShadowPrepareGetCredentialResponse
// summary: Robolectric shadow of the Android PrepareGetCredentialResponse that always reports available credential and authentication results for WebAuthn tests.
// ---

package org.chromium.components.webauthn.cred_man;

import android.credentials.PrepareGetCredentialResponse;

import org.robolectric.annotation.Implementation;
import org.robolectric.annotation.Implements;

/** Shadow of the Android Credential Manager PrepareGetCredentialResponse object. */
@Implements(value = PrepareGetCredentialResponse.class)
public class ShadowPrepareGetCredentialResponse {
    @Implementation
    protected void __constructor__() {}

    @Implementation
    protected boolean hasCredentialResults(String type) {
        return true;
    }

    @Implementation
    protected boolean hasAuthenticationResults() {
        return true;
    }
}
