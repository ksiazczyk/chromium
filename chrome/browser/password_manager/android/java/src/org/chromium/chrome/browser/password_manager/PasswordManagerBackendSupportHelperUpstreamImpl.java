// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PasswordManagerBackendSupportHelperUpstreamImpl
// summary: Instantiable upstream stub of PasswordManagerBackendSupportHelper; the actual implementation is provided downstream via ServiceLoader.
// ---

package org.chromium.chrome.browser.password_manager;

import org.chromium.build.annotations.NullMarked;

/**
 * Instantiable version of {@link PasswordManagerBackendSupportHelper}, don't add anything to this
 * class. Downstream provides an actual implementation via ServiceLoader/@ServiceImpl.
 */
@NullMarked
class PasswordManagerBackendSupportHelperUpstreamImpl extends PasswordManagerBackendSupportHelper {}
