// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Authenticator error response callback
// summary: Callback interface that receives an error status from WebAuthn register or sign requests.
// ---

package org.chromium.components.webauthn;

import org.chromium.build.annotations.NullMarked;

/** Callback interface for handling any errors from register or sign requests. */
@NullMarked
public interface AuthenticatorErrorResponseCallback {
    void onError(int status);
}
