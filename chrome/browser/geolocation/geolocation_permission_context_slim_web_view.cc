// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Slim WebView geolocation permission decision implementation
// summary: Implements DecidePermission so geolocation requests from guest view Slim WebViews are delegated to the SlimWebViewPermissionHelper when that build flag is enabled.
// ---

#include "chrome/browser/geolocation/geolocation_permission_context_slim_web_view.h"

#include "components/guest_view/buildflags/buildflags.h"
#include "extensions/buildflags/buildflags.h"

#if BUILDFLAG(ENABLE_GUEST_VIEW) && !BUILDFLAG(ENABLE_EXTENSIONS_CORE)
#include "components/guest_view/browser/slim_web_view/slim_web_view_permission_helper.h"  // nogncheck
#include "components/permissions/permission_request_id.h"
#include "content/public/browser/permission_result.h"
#include "content/public/browser/render_frame_host.h"
#endif

// static
bool GeolocationPermissionContextSlimWebView::DecidePermission(
    const permissions::PermissionRequestID& request_id,
    const GURL& requesting_frame,
    bool user_gesture,
    base::OnceCallback<void(content::PermissionResult)>* callback) {
#if BUILDFLAG(ENABLE_GUEST_VIEW) && !BUILDFLAG(ENABLE_EXTENSIONS_CORE)
  content::RenderFrameHost* rfh = content::RenderFrameHost::FromID(
      request_id.global_render_frame_host_id());

  guest_view::SlimWebViewPermissionHelper* web_view_permission_helper =
      guest_view::SlimWebViewPermissionHelper::FromRenderFrameHost(rfh);
  if (web_view_permission_helper) {
    web_view_permission_helper->RequestGeolocationPermission(
        requesting_frame, user_gesture, std::move(*callback));
    return true;
  }
#endif  // BUILDFLAG(ENABLE_GUEST_VIEW) && !BUILDFLAG(ENABLE_EXTENSIONS_CORE)
  return false;
}
