// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Executor interface aware of the task call-site location
// summary: Defines an Executor variant whose execute method accepts a Location so submitted work can be attributed to the code that initiated it.
// ---

package org.chromium.base.task;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

import java.util.concurrent.Executor;

/**
 * An {@link Executor} that is aware of the call site {@link Location} of the task. This is used to
 * attribute work back to the code that initiated it, which is useful for debugging.
 */
@NullMarked
public interface LocationAwareExecutor extends Executor {
    /**
     * Do not call this method directly unless forwarding a location object. Use {@link
     * #execute(Runnable)} instead.
     *
     * <p>Overload of {@link #execute(Runnable)} for the Java location rewriter.
     */
    void execute(Runnable r, @Nullable Location location);

    @Override
    default void execute(Runnable r) {
        execute(r, null);
    }
}
