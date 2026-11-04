// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AttestationTokenGeneratorDefaultDelegate
// summary: Default fallback delegate that returns a not-implemented error for token generation and performs no cache pre-warming when no downstream implementation is available.
// ---

package org.chromium.chrome.browser.enterprise.connectors.device_trust.attestation;

import org.chromium.build.annotations.NullMarked;

/**
 * Default fallback implementation of {@link AttestationTokenGeneratorDelegate}. Used when no
 * downstream implementation is available.
 */
@NullMarked
class AttestationTokenGeneratorDefaultDelegate implements AttestationTokenGeneratorDelegate {
    @Override
    public AttestationTokenResult generateToken(byte[] contentBinding) {
        return new AttestationTokenResult(/* token= */ null, /* errorMessage= */ "Not implemented");
    }

    @Override
    public void preWarmCache() {}
}
