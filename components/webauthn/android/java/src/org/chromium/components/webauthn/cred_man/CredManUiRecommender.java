// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Interface for embedder custom UI versus CredMan recommendations
// summary: Interface that lets the embedder recommend using a custom UI instead of Credential Manager calls.
// ---

package org.chromium.components.webauthn.cred_man;

import org.chromium.build.annotations.NullMarked;

/** This interface specifies whether custom UI or CredMan is recommended by the embedder. */
@NullMarked
public interface CredManUiRecommender {
    /**
     * Returns a recommendation on whether to use a custom UI over CredMan calls.
     *
     * @return True only iff the browser downstream identifies an advantage of custom UI.
     */
    boolean recommendsCustomUi();
}
