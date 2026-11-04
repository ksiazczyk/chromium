// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Factory for declaring elements after a Condition is fulfilled
// summary: Runs a delayed declaration callback once to fabricate new elements after a triggering Condition is first fulfilled.
// ---

package org.chromium.base.test.transit;

import org.chromium.base.Callback;
import org.chromium.build.annotations.NullMarked;

/** Fabricates new elements after a Condition is first fulfilled. */
@NullMarked
public class ElementFactory {
    private final Elements mOwner;
    private final Callback<Elements.Builder> mDelayedDeclarations;
    private boolean mIsProcessed;

    ElementFactory(Elements owner, Callback<Elements.Builder> delayedDeclarations) {
        assert owner != null;
        assert delayedDeclarations != null;
        mOwner = owner;
        mDelayedDeclarations = delayedDeclarations;
    }

    /**
     * Runs the delayed element declaration callback. Should only be called once.
     *
     * @return Newly declared elements from this factory.
     */
    public BaseElements processDelayedDeclarations() {
        assert !mIsProcessed
                : "ElementFactory#processDelayedDeclarations should only be called once";
        mIsProcessed = true;
        Elements.Builder builder = mOwner.newBuilder();
        mDelayedDeclarations.onResult(builder);
        BaseElements newElements = builder.consolidate();
        return newElements;
    }
}
