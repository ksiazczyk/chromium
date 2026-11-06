// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Managed bookmark utility header
// summary: Declares helper functions for checking whether a permanent bookmark node is a permanent node or the managed node.
// ---

#ifndef COMPONENTS_BOOKMARKS_MANAGED_MANAGED_BOOKMARK_UTIL_H_
#define COMPONENTS_BOOKMARKS_MANAGED_MANAGED_BOOKMARK_UTIL_H_

namespace bookmarks {

class BookmarkPermanentNode;
class ManagedBookmarkService;

// Returns whether `node` is a permanent node.
bool IsPermanentNode(const BookmarkPermanentNode* node,
                     ManagedBookmarkService* managed_bookmark_service);

// Returns whether `node` is a managed node.
bool IsManagedNode(const BookmarkPermanentNode* node,
                   ManagedBookmarkService* managed_bookmark_service);

}  // namespace bookmarks

#endif  // COMPONENTS_BOOKMARKS_MANAGED_MANAGED_BOOKMARK_UTIL_H_
