// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SelfFreezeCallback
// summary: Functional interface notified when the process performs a self-freeze.
// ---

package org.chromium.base.memory;

import org.chromium.build.annotations.NullMarked;

/** self freeze callback interface. */
@NullMarked
@FunctionalInterface
public interface SelfFreezeCallback {
    void onSelfFreeze();
}
