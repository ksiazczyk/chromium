// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Managed bookmark utility implementation
// summary: Implements helpers that determine whether a permanent bookmark node is a standard permanent node or the enterprise-managed node.
// ---

#include "components/bookmarks/managed/managed_bookmark_util.h"

#include "components/bookmarks/browser/bookmark_node.h"
#include "components/bookmarks/managed/managed_bookmark_service.h"

namespace bookmarks {

bool IsPermanentNode(const BookmarkPermanentNode* node,
                     ManagedBookmarkService* managed_bookmark_service) {
  BookmarkNode::Type type = node->type();
  if (type == BookmarkNode::BOOKMARK_BAR ||
      type == BookmarkNode::OTHER_NODE ||
      type == BookmarkNode::MOBILE) {
    return true;
  }

  return IsManagedNode(node, managed_bookmark_service);
}

bool IsManagedNode(const BookmarkPermanentNode* node,
                   ManagedBookmarkService* managed_bookmark_service) {
  if (!managed_bookmark_service)
    return false;

  return node == managed_bookmark_service->managed_node();
}

}  // namespace bookmarks
