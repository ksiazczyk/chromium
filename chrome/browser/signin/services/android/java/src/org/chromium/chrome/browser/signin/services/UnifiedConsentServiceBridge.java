// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'UnifiedConsentServiceBridge: anonymized data collection bridge'
// summary: JNI bridge to the UnifiedConsentService for querying, setting, and checking policy control of URL-keyed anonymized data collection per profile.
// ---

package org.chromium.chrome.browser.signin.services;

import androidx.annotation.VisibleForTesting;

import org.jni_zero.JniType;
import org.jni_zero.NativeMethods;

import org.chromium.base.ResettersForTesting;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.profiles.Profile;

/** Bridge to UnifiedConsentService. */
@NullMarked
public class UnifiedConsentServiceBridge {
    private static @Nullable Boolean sUrlKeyedAnonymizedDataCollectionEnabledForTesting;

    private UnifiedConsentServiceBridge() {}

    /** Returns whether collection of URL-keyed anonymized data is enabled. */
    public static boolean isUrlKeyedAnonymizedDataCollectionEnabled(Profile profile) {
        if (sUrlKeyedAnonymizedDataCollectionEnabledForTesting != null) {
            return sUrlKeyedAnonymizedDataCollectionEnabledForTesting;
        }
        return UnifiedConsentServiceBridgeJni.get()
                .isUrlKeyedAnonymizedDataCollectionEnabled(profile);
    }

    /** Sets whether collection of URL-keyed anonymized data is enabled. */
    public static void setUrlKeyedAnonymizedDataCollectionEnabled(
            Profile profile, boolean enabled) {
        UnifiedConsentServiceBridgeJni.get()
                .setUrlKeyedAnonymizedDataCollectionEnabled(profile, enabled);
    }

    /** Returns whether collection of URL-keyed anonymized data is configured by policy. */
    public static boolean isUrlKeyedAnonymizedDataCollectionManaged(Profile profile) {
        return UnifiedConsentServiceBridgeJni.get()
                .isUrlKeyedAnonymizedDataCollectionManaged(profile);
    }

    @VisibleForTesting(otherwise = VisibleForTesting.PACKAGE_PRIVATE)
    public static void setUrlKeyedAnonymizedDataCollectionEnabled(Boolean isEnabled) {
        sUrlKeyedAnonymizedDataCollectionEnabledForTesting = isEnabled;
        ResettersForTesting.register(
                () -> sUrlKeyedAnonymizedDataCollectionEnabledForTesting = null);
    }

    @NativeMethods
    @VisibleForTesting(otherwise = VisibleForTesting.PACKAGE_PRIVATE)
    public interface Natives {
        boolean isUrlKeyedAnonymizedDataCollectionEnabled(@JniType("Profile*") Profile profile);

        void setUrlKeyedAnonymizedDataCollectionEnabled(
                @JniType("Profile*") Profile profile, boolean enabled);

        boolean isUrlKeyedAnonymizedDataCollectionManaged(@JniType("Profile*") Profile profile);
    }
}
