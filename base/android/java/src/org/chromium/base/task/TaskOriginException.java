// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskOriginException
// summary: A simple exception subclass used to capture the stack trace showing where a task was posted from.
// ---

package org.chromium.base.task;

import org.chromium.build.annotations.NullMarked;

/** Used to capture stacks of where tasks are posted from. */
@NullMarked
class TaskOriginException extends Exception {

    TaskOriginException() {
        super("vvv This is where the task was posted. vvv");
    }
}
