// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChildServiceConnectionFactory interface
// summary: Factory interface for creating ChildServiceConnection instances from a bind intent, flags, delegate, and optional instance name.
// ---

package org.chromium.base.process_launcher;

import android.content.Intent;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

@NullMarked
/* package */ interface ChildServiceConnectionFactory {
    ChildServiceConnection createConnection(
            Intent bindIntent,
            int bindFlags,
            ChildServiceConnectionDelegate delegate,
            @Nullable String instanceName);
}
