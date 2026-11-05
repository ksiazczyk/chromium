// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Common interface for Touch To Fill credentials
// summary: Empty marker interface implemented by both password and WebAuthn credential classes in the Touch To Fill data package.
// ---

package org.chromium.chrome.browser.touch_to_fill.data;

import org.chromium.build.annotations.NullMarked;

/** An empty interface for implementation by both passwords and passkeys. */
@NullMarked
public interface CredentialBase {}
