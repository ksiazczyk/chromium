// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IsUvpaaResponseCallback
// summary: Callback interface for receiving the result of an IsUserVerifyingPlatformAuthenticatorAvailable check.
// ---

package org.chromium.components.webauthn;

import org.chromium.build.annotations.NullMarked;

/**
 * Callback interface for receiving a response from a request to call
 * IsUserVerifyingPlatformAuthenticator.
 */
@NullMarked
public interface IsUvpaaResponseCallback {
    void onIsUserVerifyingPlatformAuthenticatorAvailableResponse(boolean isUVPAA);
}
