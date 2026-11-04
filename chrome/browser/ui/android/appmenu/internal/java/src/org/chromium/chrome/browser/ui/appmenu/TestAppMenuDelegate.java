// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test app menu delegate
// summary: Test double implementing AppMenuDelegate that records selected menu item IDs and supplies a test properties delegate for app menu tests.
// ---

package org.chromium.chrome.browser.ui.appmenu;

import android.content.Context;
import android.os.Bundle;

import androidx.annotation.Nullable;

import org.chromium.base.test.util.CallbackHelper;
import org.chromium.components.browser_ui.util.motion.MotionEventInfo;

class TestAppMenuDelegate implements AppMenuDelegate {
    private final Context mContext;

    public final CallbackHelper itemSelectedCallbackHelper = new CallbackHelper();
    public int lastSelectedItemId;

    TestAppMenuDelegate(Context context) {
        mContext = context;
    }

    @Override
    public boolean onOptionsItemSelected(
            int itemId, @Nullable Bundle menuItemData, @Nullable MotionEventInfo triggeringMotion) {
        lastSelectedItemId = itemId;
        itemSelectedCallbackHelper.notifyCalled();
        return true;
    }

    @Override
    public AppMenuPropertiesDelegate createAppMenuPropertiesDelegate() {
        return new TestAppMenuPropertiesDelegate(mContext);
    }
}
