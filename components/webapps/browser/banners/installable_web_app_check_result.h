// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InstallableWebAppCheckResult enum header
// summary: Defines the InstallableWebAppCheckResult enum describing the degree to which a site satisfies web app installability requirements.
// ---

#ifndef COMPONENTS_WEBAPPS_BROWSER_BANNERS_INSTALLABLE_WEB_APP_CHECK_RESULT_H_
#define COMPONENTS_WEBAPPS_BROWSER_BANNERS_INSTALLABLE_WEB_APP_CHECK_RESULT_H_

namespace webapps {
// Installable describes to what degree a site satisfies the installability
// requirements.
enum class InstallableWebAppCheckResult {
  kUnknown,
  kNo,
  kNo_AlreadyInstalled,
  kYes_ByUserRequest,
  kYes_Promotable,
};
}  // namespace webapps

#endif  // COMPONENTS_WEBAPPS_BROWSER_BANNERS_INSTALLABLE_WEB_APP_CHECK_RESULT_H_
