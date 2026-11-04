// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App install discovery metrics API
// summary: Declares the function that records an app discovery metric for an install request on a given surface.
// ---

#ifndef CHROME_BROWSER_APPS_APP_SERVICE_APP_INSTALL_APP_INSTALL_DISCOVERY_METRICS_H_
#define CHROME_BROWSER_APPS_APP_SERVICE_APP_INSTALL_APP_INSTALL_DISCOVERY_METRICS_H_

#include "chrome/browser/apps/app_service/app_install/app_install_types.h"

class Profile;

namespace apps {
class PackageId;

void RecordAppDiscoveryMetricForInstallRequest(Profile* profile,
                                               AppInstallSurface surface,
                                               const PackageId& package_id);
}  // namespace apps

#endif  // CHROME_BROWSER_APPS_APP_SERVICE_APP_INSTALL_APP_INSTALL_DISCOVERY_METRICS_H_
