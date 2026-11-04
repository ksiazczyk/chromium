// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PassiveMemoryConsumer interface for on-demand limit gating
// summary: Extension of MemoryConsumer for components that cache their memory limit and gate activities on demand, treating release-memory notifications as a no-op.
// ---

package org.chromium.base.memory_coordinator;

import org.chromium.build.annotations.NullMarked;

/**
 * A {@link MemoryConsumer} that maintains an internal memory limit to gate activities on-demand,
 * but does not actively react to memory pressure notifications (i.e. {@link #onReleaseMemory()} is
 * a no-op).
 *
 * <p>Implementations should cache the {@link MemoryLimit} received in {@link
 * #onUpdateMemoryLimit(MemoryLimit)} (defaulting to {@link MemoryLimit#DEFAULT}) and query their
 * cached limit when performing operations.
 */
@NullMarked
public interface PassiveMemoryConsumer extends MemoryConsumer {
    @Override
    default void onReleaseMemory() {}
}
