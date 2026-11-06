// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CommerceFeatureUtils
// summary: Java wrapper that queries the native commerce component for feature eligibility such as shopping list, discount info API and price annotations via JNI.
// ---

package org.chromium.components.commerce.core;

import androidx.annotation.VisibleForTesting;

import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.Contract;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** This class is the java version of the commerce component's feature_utils. */
@JNINamespace("commerce")
@NullMarked
public class CommerceFeatureUtils {
    @Contract("null -> false")
    public static boolean isShoppingListEligible(@Nullable ShoppingService shoppingService) {
        return shoppingService != null
                && CommerceFeatureUtilsJni.get()
                        .isShoppingListEligible(shoppingService.getNativePtr());
    }

    @Contract("null -> false")
    public static boolean isDiscountInfoApiEnabled(@Nullable ShoppingService shoppingService) {
        return shoppingService != null
                && CommerceFeatureUtilsJni.get()
                        .isDiscountInfoApiEnabled(shoppingService.getNativePtr());
    }

    @Contract("null -> false")
    public static boolean isPriceAnnotationsEnabled(@Nullable ShoppingService shoppingService) {
        return shoppingService != null
                && CommerceFeatureUtilsJni.get()
                        .isPriceAnnotationsEnabled(shoppingService.getNativePtr());
    }

    @NativeMethods
    @VisibleForTesting(otherwise = VisibleForTesting.PACKAGE_PRIVATE)
    public interface Natives {
        boolean isShoppingListEligible(long shoppingServicePtr);

        boolean isDiscountInfoApiEnabled(long shoppingServicePtr);

        boolean isPriceAnnotationsEnabled(long shoppingServicePtr);
    }
}
