// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Upstream password manager resource provider implementation
// summary: Provides the upstream implementation of PasswordManagerResourceProvider, returning the default password manager icon drawable, with downstream builds free to supply a different implementation.
// ---

package org.chromium.chrome.browser.password_manager;

import androidx.annotation.DrawableRes;

import org.chromium.build.annotations.NullMarked;

/**
 * Public version of {@link PasswordManagerResourceProviderUpstreamImpl}. Downstream may provide a
 * different implementation.
 */
@NullMarked
class PasswordManagerResourceProviderUpstreamImpl implements PasswordManagerResourceProvider {
    @Override
    public @DrawableRes int getPasswordManagerIcon() {
        return R.drawable.ic_vpn_key_blue;
    }
}
