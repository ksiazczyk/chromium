// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LanguageProfileDelegate
// summary: Interface for retrieving device language profile data as a preference-ordered list of language tags for a given account.
// ---

package org.chromium.components.language;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

import java.util.List;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeoutException;

/** Interface to get language profile data for device. */
@NullMarked
public interface LanguageProfileDelegate {
    /**
     * @param accountName Account to get profile or null if the default profile should be returned.
     * @param timeoutInSeconds Seconds to wait before timing out on call to device.
     * @return A list of language tags ordered by preference for |accountName|
     */
    List<String> getLanguagePreferences(@Nullable String accountName, int timeoutInSeconds)
            throws ExecutionException, InterruptedException, TimeoutException;
}
