// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Constants
// summary: Holds shared constants for the SPNEGO authenticator, including the log tag, dummy auth token, notification ID and dummy account names.
// ---

package org.chromium.tools.spnegoauthenticator;

class Constants {
    static final String TAG = "tools_SpnegoAuth";
    static final String AUTH_TOKEN = "DummyAuthToken";
    static final int CONFIRM_CREDENTIAL_NOTIFICATION_ID = 42;
    static final String ACCOUNT_1_NAME = "Dummy SpnegoAccount 1";
    static final String ACCOUNT_2_NAME = "Dummy SpnegoAccount 2";
}
