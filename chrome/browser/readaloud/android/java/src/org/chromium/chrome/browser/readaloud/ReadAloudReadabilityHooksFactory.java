// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ReadAloudReadabilityHooksFactory
// summary: Factory interface that creates a ReadAloudReadabilityHooks instance for a given context and profile.
// ---

package org.chromium.chrome.browser.readaloud;

import android.content.Context;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.profiles.Profile;

@NullMarked
public interface ReadAloudReadabilityHooksFactory {
    ReadAloudReadabilityHooks create(Context context, Profile profile);
}
