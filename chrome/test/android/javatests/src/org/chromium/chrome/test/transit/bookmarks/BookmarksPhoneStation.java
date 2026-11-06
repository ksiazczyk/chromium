// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BookmarksPhoneStation test station for the phone Bookmarks page
// summary: Defines a transit station representing the Bookmarks page on phones, wrapping BookmarkActivity for use in Chrome UI tests.
// ---

package org.chromium.chrome.test.transit.bookmarks;

import org.chromium.base.test.transit.Station;
import org.chromium.chrome.browser.app.bookmarks.BookmarkActivity;

/** The Bookmarks page in phones. */
public class BookmarksPhoneStation extends Station<BookmarkActivity> {

    public BookmarksPhoneStation() {
        super(BookmarkActivity.class);
    }
}
