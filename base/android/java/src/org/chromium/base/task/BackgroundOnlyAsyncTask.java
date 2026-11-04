// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Background-only AsyncTask base class
// summary: Defines an AsyncTask subclass for background tasks that asserts post-execution never runs, as a step toward FutureTask-based migration.
// ---

package org.chromium.base.task;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/**
 * An AsyncTask which does not require post-execution.
 *
 * <p>The addition of this class is only temporary with the eventual goal of transitioning all such
 * tasks to FutureTasks / Runnables.
 *
 * @param <Result> Return type of the background task.
 */
@NullMarked
public abstract class BackgroundOnlyAsyncTask<Result extends @Nullable Object>
        extends AsyncTask<Result> {
    @Override
    protected final void onPostExecute(@Nullable Result result) {
        // This method should never be executed for background-only tasks.
        assert false;
    }
}
