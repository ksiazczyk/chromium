// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SparseArrayWithWorkaround
// summary: SparseArray subclass that works around an Android U autofill framework bug (b/299532529) and is intended only for that purpose until Android U support ends.
// ---

package org.chromium.components.autofill;

import android.util.SparseArray;
import android.view.autofill.VirtualViewFillInfo;

import org.chromium.build.annotations.NullMarked;

/**
 * This class works as a workaround for a bug (b/299532529) in the framework for autofill. DON'T use
 * elsewhere. It should be removed once we drop support for Android U.
 */
@NullMarked
class SparseArrayWithWorkaround extends SparseArray<VirtualViewFillInfo> {

    @Override
    public int indexOfKey(int key) {
        return this.keyAt(key);
    }
}
