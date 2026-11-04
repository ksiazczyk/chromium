// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ReengagementActivity trampoline to open the NTP from a reengagement notification
// summary: Android trampoline activity that, when launched with the reengagement notification's LAUNCH_NTP_ACTION, starts a trusted non-incognito new-tab intent and then finishes itself.
// ---

package org.chromium.chrome.browser.app.reengagement;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.IntentHandler;
import org.chromium.chrome.browser.reengagement.ReengagementNotificationController;

/** Trampoline activity to start the NTP from the reengagement notification. */
@NullMarked
public class ReengagementActivity extends Activity {
    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        String action = getIntent().getAction();
        if (ReengagementNotificationController.LAUNCH_NTP_ACTION.equals(action)) {
            Intent intent =
                    IntentHandler.createTrustedOpenNewTabIntent(this, /* incognito= */ false);
            startActivity(intent);
        }
        finish();
    }
}
