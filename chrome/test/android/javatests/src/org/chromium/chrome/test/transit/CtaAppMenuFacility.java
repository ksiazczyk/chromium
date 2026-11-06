// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Base facility for ChromeTabbedActivity app menus
// summary: Abstract base class for app menu facilities opened from the ChromeTabbedActivity three-dot menu, providing access to the app menu coordinator for testing.
// ---

package org.chromium.chrome.test.transit;

import org.chromium.base.test.transit.Station;
import org.chromium.chrome.browser.ChromeTabbedActivity;
import org.chromium.chrome.browser.ui.appmenu.AppMenuCoordinator;

/**
 * Base class for app menus in ChromeTabbedActivity shown when pressing ("...").
 *
 * @param <HostStationT> the type of host {@link Station} where this app menu is opened.
 */
public abstract class CtaAppMenuFacility<HostStationT extends Station<ChromeTabbedActivity>>
        extends AppMenuFacility<HostStationT> {

    @Override
    public AppMenuCoordinator getAppMenuCoordinator() {
        return mHostStation
                .getActivity()
                .getRootUiCoordinatorForTesting()
                .getAppMenuCoordinatorForTesting();
    }
}
