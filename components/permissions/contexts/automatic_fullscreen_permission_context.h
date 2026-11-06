// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Automatic fullscreen permission context class declaration
// summary: Declares the permission context class that manages automatic fullscreen permissions on top of the content setting permission context base.
// ---

#ifndef COMPONENTS_PERMISSIONS_CONTEXTS_AUTOMATIC_FULLSCREEN_PERMISSION_CONTEXT_H_
#define COMPONENTS_PERMISSIONS_CONTEXTS_AUTOMATIC_FULLSCREEN_PERMISSION_CONTEXT_H_

#include "components/permissions/content_setting_permission_context_base.h"

namespace permissions {

class AutomaticFullscreenPermissionContext
    : public ContentSettingPermissionContextBase {
 public:
  explicit AutomaticFullscreenPermissionContext(
      content::BrowserContext* browser_context);
  ~AutomaticFullscreenPermissionContext() override = default;

  AutomaticFullscreenPermissionContext(
      const AutomaticFullscreenPermissionContext&) = delete;
  AutomaticFullscreenPermissionContext& operator=(
      const AutomaticFullscreenPermissionContext&) = delete;
};

}  // namespace permissions

#endif  // COMPONENTS_PERMISSIONS_CONTEXTS_AUTOMATIC_FULLSCREEN_PERMISSION_CONTEXT_H_
