// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bookmark bar view observer interface
// summary: Declares the observer interface notified of bookmark bar visibility changes and when a drop menu is shown.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_BOOKMARKS_BOOKMARK_BAR_VIEW_OBSERVER_H_
#define CHROME_BROWSER_UI_VIEWS_BOOKMARKS_BOOKMARK_BAR_VIEW_OBSERVER_H_

class BookmarkBarViewObserver {
 public:
  // Called when the BookmarkBarView's visibility is directly toggled.  Not
  // called when the visibility changes due to e.g. a parent being made visible.
  virtual void OnBookmarkBarVisibilityChanged() {}

  // Called when the user drags over a folder, causing a menu to appear (into
  // which bookmarks can be dropped).
  virtual void OnDropMenuShown() {}

 protected:
  ~BookmarkBarViewObserver() = default;
};

#endif  // CHROME_BROWSER_UI_VIEWS_BOOKMARKS_BOOKMARK_BAR_VIEW_OBSERVER_H_
