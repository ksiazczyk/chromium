// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Upstream password store Android backend factory implementation
// summary: Empty instantiable subclass of PasswordStoreAndroidBackendFactory that acts as the upstream fallback when no downstream factory is provided.
// ---

package org.chromium.chrome.browser.password_manager;

import org.chromium.build.annotations.NullMarked;

/**
 * Instantiable version of {@link PasswordStoreAndroidBackendFactory}, don't add anything to this
 * class. Downstream provide an actual implementation via ServiceLoader/@ServiceImpl.
 */
@NullMarked
class PasswordStoreAndroidBackendFactoryUpstreamImpl extends PasswordStoreAndroidBackendFactory {}
