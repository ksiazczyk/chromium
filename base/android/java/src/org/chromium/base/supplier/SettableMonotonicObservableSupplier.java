// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SettableMonotonicObservableSupplier
// summary: Interface combining a monotonic observable supplier with Destroyable, adding a set method and a default conversion to a settable non-null supplier.
// ---

package org.chromium.base.supplier;

import org.chromium.base.lifetime.Destroyable;
import org.chromium.build.annotations.NullMarked;

/**
 * A supplier that is settable.
 *
 * @param <T> The type of the object supplied.
 */
@NullMarked
public interface SettableMonotonicObservableSupplier<T>
        extends MonotonicObservableSupplier<T>, Destroyable {
    /**
     * Sets the value of the supplier.
     *
     * @param value The new value.
     */
    void set(T value);

    /** Clears observers and sets value to null. */
    @Override
    void destroy();

    /**
     * @return A {@link NonNullObservableSupplier} if the supplied value is not null.
     */
    @SuppressWarnings("Unchecked")
    @Override
    default SettableNonNullObservableSupplier<T> asNonNull() {
        // Cast from monotonic non-null -> non-null.
        return (SettableNonNullObservableSupplier<T>) MonotonicObservableSupplier.super.asNonNull();
    }
}
