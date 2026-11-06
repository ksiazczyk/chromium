// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BookmarkFormFactor enum
// summary: Defines the BookmarkFormFactor enum of desktop and mobile device form factors used to determine bookmark UI behaviors such as folder visibility.
// ---

#ifndef COMPONENTS_BOOKMARKS_BROWSER_BOOKMARK_FORM_FACTOR_H_
#define COMPONENTS_BOOKMARKS_BROWSER_BOOKMARK_FORM_FACTOR_H_

namespace bookmarks {

// Represents the device form factor used to determine bookmark UI behaviors,
// such as permanent folder visibility when empty.
enum class BookmarkFormFactor {
  kDesktop,
  kMobile,
};

}  // namespace bookmarks

#endif  // COMPONENTS_BOOKMARKS_BROWSER_BOOKMARK_FORM_FACTOR_H_
