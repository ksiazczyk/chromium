// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BookmarkWidgetService
// summary: RemoteViews service entry point for the bookmarks widget that delegates to the BookmarkWidgetServiceImpl implementation class via SplitCompatRemoteViewsService.
// ---

package org.chromium.chrome.browser.bookmarkswidget;

import org.chromium.build.annotations.IdentifierNameString;
import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.base.SplitCompatRemoteViewsService;

/** See {@link BookmarkWidgetServiceImpl}. */
@NullMarked
public class BookmarkWidgetService extends SplitCompatRemoteViewsService {
    @SuppressWarnings("FieldCanBeFinal") // @IdentifierNameString requires non-final
    private static @IdentifierNameString String sImplClassName =
            "org.chromium.chrome.browser.bookmarkswidget.BookmarkWidgetServiceImpl";

    public BookmarkWidgetService() {
        super(sImplClassName);
    }
}
