// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DataSharingImplFactory
// summary: Interface for creating data sharing UI and SDK delegates for a given profile.
// ---

package org.chromium.chrome.browser.data_sharing;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.components.data_sharing.DataSharingSDKDelegate;
import org.chromium.components.data_sharing.DataSharingUIDelegate;

@NullMarked
public interface DataSharingImplFactory {
    DataSharingUIDelegate createUiDelegate(Profile profile);

    DataSharingSDKDelegate createSdkDelegate(Profile profile);
}
