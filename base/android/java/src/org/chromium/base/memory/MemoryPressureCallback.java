// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MemoryPressureCallback
// summary: Functional interface invoked with a memory pressure level when a memory pressure event is delivered.
// ---

package org.chromium.base.memory;

import org.chromium.base.MemoryPressureLevel;
import org.chromium.build.annotations.NullMarked;

/** Memory pressure callback interface. */
@NullMarked
@FunctionalInterface
public interface MemoryPressureCallback {
    void onPressure(@MemoryPressureLevel int pressure);
}
