// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password echo setting delegate interface
// summary: Delegate interface for password echo settings that exposes physical and touch keyboard settings and registers change callbacks.
// ---

package org.chromium.base;

import org.chromium.build.annotations.NullMarked;

/** Delegate interface for Password Echo settings. */
@NullMarked
public interface PasswordEchoSettingDelegate {
    /** Registers a callback to be invoked when the password echo settings change. */
    void registerCallback(Runnable callback);

    /** Returns whether the physical keyboard password echo setting is enabled. */
    boolean isPhysicalSettingEnabled();

    /** Returns whether the touch keyboard password echo setting is enabled. */
    boolean isTouchSettingEnabled();
}
