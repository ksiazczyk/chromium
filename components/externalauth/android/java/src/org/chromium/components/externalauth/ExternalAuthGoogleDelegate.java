// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExternalAuthGoogleDelegate
// summary: Base class for Google-signed package checks whose behavior is swapped per downstream target at compile time via build rules.
// ---

package org.chromium.components.externalauth;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/**
 * Base class for defining methods where different behavior is required by downstream targets. The
 * correct version of {@link ExternalAuthGoogleDelegateImpl} will be determined at compile time via
 * build rules.
 */
@NullMarked
public class ExternalAuthGoogleDelegate {
    /**
     * Returns whether the call is originating from a Google-signed package.
     *
     * @param packageName The package name to inquire about.
     */
    public boolean isGoogleSigned(@Nullable String packageName) {
        return false;
    }
}
