// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Upstream Credential Manager launcher factory stub
// summary: Instantiable no-op subclass of CredentialManagerLauncherFactory used upstream when no downstream implementation is available.
// ---

package org.chromium.chrome.browser.password_manager;

import org.chromium.build.annotations.NullMarked;

/**
 * Instantiable version of {@link CredentialManagerLauncherFactory}, don't add anything to this
 * class. Downstream provides an actual implementation via ServiceLoader/@ServiceImpl.
 */
@NullMarked
class CredentialManagerLauncherFactoryUpstreamImpl extends CredentialManagerLauncherFactory {}
