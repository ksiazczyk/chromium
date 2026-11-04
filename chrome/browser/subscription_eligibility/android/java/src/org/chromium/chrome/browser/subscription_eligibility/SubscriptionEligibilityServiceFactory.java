// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Per-profile factory for SubscriptionEligibilityService
// summary: Factory that creates and returns SubscriptionEligibilityService instances per profile and supports substituting a mock service for testing.
// ---

package org.chromium.chrome.browser.subscription_eligibility;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.chrome.browser.profiles.ProfileKeyedMap;

/** Factory for creating and returning SubscriptionEligibilityService instances per Profile. */
@NullMarked
public class SubscriptionEligibilityServiceFactory {
    private static @Nullable ProfileKeyedMap<SubscriptionEligibilityService> sProfileMap;
    private static @Nullable SubscriptionEligibilityService sServiceForTesting;

    /** Retrieves the SubscriptionEligibilityService for the given profile. */
    public static SubscriptionEligibilityService getForProfile(Profile profile) {
        if (sServiceForTesting != null) {
            return sServiceForTesting;
        }

        if (sProfileMap == null) {
            sProfileMap =
                    new ProfileKeyedMap<>(
                            ProfileKeyedMap.ProfileSelection.REDIRECTED_TO_ORIGINAL,
                            SubscriptionEligibilityService::destroy);
        }

        return sProfileMap.getForProfile(
                profile, SubscriptionEligibilityServiceFactory::buildForProfile);
    }

    private static SubscriptionEligibilityService buildForProfile(Profile profile) {
        return new SubscriptionEligibilityService(profile);
    }

    /** Sets a mock service for testing purposes. */
    public static void setForTesting(@Nullable SubscriptionEligibilityService service) {
        sServiceForTesting = service;
    }
}
