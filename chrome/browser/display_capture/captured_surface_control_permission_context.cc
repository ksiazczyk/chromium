// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Captured surface control permission context implementation
// summary: Implements CapturedSurfaceControlPermissionContext, binding the CAPTURED_SURFACE_CONTROL content setting to its permissions policy feature.
// ---

#include "chrome/browser/display_capture/captured_surface_control_permission_context.h"

#include "components/content_settings/core/common/content_settings_types.h"
#include "services/network/public/mojom/permissions_policy/permissions_policy_feature.mojom.h"

namespace permissions {

CapturedSurfaceControlPermissionContext::
    CapturedSurfaceControlPermissionContext(
        content::BrowserContext* browser_context)
    : ContentSettingPermissionContextBase(
          browser_context,
          ContentSettingsType::CAPTURED_SURFACE_CONTROL,
          network::mojom::PermissionsPolicyFeature::kCapturedSurfaceControl) {}

}  // namespace permissions
