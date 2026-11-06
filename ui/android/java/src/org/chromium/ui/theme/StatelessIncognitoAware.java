// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: StatelessIncognitoAware interface
// summary: Interface for classes that should be destroyed and unsubscribed when the incognito state changes, performing the Destroyable cleanup on theme resource change.
// ---

package org.chromium.ui.theme;

import org.chromium.base.lifetime.Destroyable;
import org.chromium.build.annotations.NullMarked;

/** Interface represents classes should be destroyed when incognito state changes. */
@NullMarked
public interface StatelessIncognitoAware extends IncognitoAware, Destroyable {

    @Override
    default void onThemeResourceChanged(ThemeResourceWrapper source) {
        destroy();
        source.removeObserver(this);
    }
}
