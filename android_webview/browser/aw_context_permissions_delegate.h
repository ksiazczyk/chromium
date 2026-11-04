// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwContextPermissionsDelegate interface
// summary: Declares an interface for looking up permissions such as geolocation in AwBrowserContext, decoupling it from AwPermissionManager for easier mocking in tests.
// relations:
//   - depends_on /components/permissions/permission_manager.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_AW_CONTEXT_PERMISSIONS_DELEGATE_H_
#define ANDROID_WEBVIEW_BROWSER_AW_CONTEXT_PERMISSIONS_DELEGATE_H_

#include "components/permissions/permission_manager.h"

namespace android_webview {

// Delegate interface to look up permissions in `AwBrowserContext`.
// This interface exists to encapsulate the parts of AwBrowserContext that is
// depended upon by AwPermissionManager, so it can be easily mocked out in
// tests, and to break any circular dependencies between AwBrowserContext and
// AwPermissionManager.
class AwContextPermissionsDelegate {
 public:
  virtual ~AwContextPermissionsDelegate() = default;
  virtual PermissionStatus GetGeolocationPermission(
      const GURL& requesting_origin) const = 0;

 protected:
  AwContextPermissionsDelegate() = default;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_AW_CONTEXT_PERMISSIONS_DELEGATE_H_
