// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Per-origin cookie count holder
// summary: Serializable data class that stores and increments the number of cookies kept for a given origin.
// ---

package org.chromium.components.browser_ui.site_settings;

import org.chromium.build.annotations.NullMarked;

import java.io.Serializable;

/** Cookies information for a given origin. */
@NullMarked
public class CookiesInfo implements Serializable {
    private int mCookies;

    public CookiesInfo() {
        mCookies = 0;
    }

    public CookiesInfo(int cookies) {
        mCookies = cookies;
    }

    public void increment() {
        mCookies++;
    }

    public int getCount() {
        return mCookies;
    }
}
