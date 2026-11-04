// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App mode context menu content type
// summary: Restricts context menu item groups to editable and copy actions when running in app mode.
// ---

#include "chrome/browser/renderer_context_menu/context_menu_content_type_app_mode.h"

ContextMenuContentTypeAppMode::ContextMenuContentTypeAppMode(
    const content::ContextMenuParams& params)
    : ContextMenuContentType(params, false) {}

ContextMenuContentTypeAppMode::~ContextMenuContentTypeAppMode() = default;

bool ContextMenuContentTypeAppMode::SupportsGroup(int group) {
  switch (group) {
    case ITEM_GROUP_EDITABLE:
    case ITEM_GROUP_COPY:
      return ContextMenuContentType::SupportsGroup(group);
    default:
      return false;
  }
}
