// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebAPK offline network error dialog
// summary: Shows an alert dialog notifying the user of network errors while loading a WebAPK's start URL, with an OK action that finishes the activity.
// ---

package org.chromium.chrome.browser.webapps;

import android.app.Activity;
import android.app.Dialog;

import androidx.appcompat.app.AlertDialog;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.R;

/** A dialog to notify user of network errors while loading WebAPK's start URL. */
@NullMarked
public class WebApkOfflineDialog {
    private @Nullable Dialog mDialog;

    /** Returns whether the dialog is showing. */
    public boolean isShowing() {
        return mDialog != null && mDialog.isShowing();
    }

    /**
     * Shows dialog to notify user of network error.
     *
     * @param activity Activity that will be used for {@link Dialog#show()}.
     */
    public void show(final Activity activity, String errorMessage) {
        AlertDialog.Builder builder =
                new AlertDialog.Builder(activity, R.style.ThemeOverlay_BrowserUI_AlertDialog);
        builder.setMessage(errorMessage)
                .setPositiveButton(R.string.ok, (_, _) -> activity.finishAndRemoveTask());

        mDialog = builder.create();
        mDialog.setCanceledOnTouchOutside(false);
        mDialog.show();
    }

    /** Closes the dialog. */
    public void cancel() {
        if (mDialog != null) mDialog.cancel();
    }
}
