// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Upstream default password settings accessor factory
// summary: Empty instantiable subclass of PasswordSettingsAccessorFactory serving as the upstream fallback, while downstream supplies the real implementation via ServiceLoader.
// ---

package org.chromium.chrome.browser.password_manager;

import org.chromium.build.annotations.NullMarked;

/**
 * Instantiable version of {@link PasswordSettingsAccessorFactory}, don't add anything to this
 * class. Downstream provides an actual implementation via ServiceLoader/@ServiceImpl.
 */
@NullMarked
class PasswordSettingsAccessorFactoryUpstreamImpl extends PasswordSettingsAccessorFactory {}
