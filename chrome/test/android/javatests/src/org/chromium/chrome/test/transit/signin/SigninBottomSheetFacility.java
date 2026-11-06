// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Sign-in bottom sheet test facility
// summary: Test facility representing the sign-in bottom sheet, declaring its expected sign-in-to-Chrome text as a descendant view for transit-based UI tests.
// ---

package org.chromium.chrome.test.transit.signin;

import static androidx.test.espresso.matcher.ViewMatchers.withText;

import android.widget.TextView;

import org.chromium.base.test.transit.Station;
import org.chromium.chrome.R;
import org.chromium.chrome.browser.ChromeTabbedActivity;
import org.chromium.chrome.test.transit.ui.BottomSheetFacility;

/** Facility for the sign-in bottom sheet. */
public class SigninBottomSheetFacility<HostStationT extends Station<ChromeTabbedActivity>>
        extends BottomSheetFacility<HostStationT> {
    public SigninBottomSheetFacility() {
        declareDescendantView(TextView.class, withText(R.string.sign_in_to_chrome));
    }
}
