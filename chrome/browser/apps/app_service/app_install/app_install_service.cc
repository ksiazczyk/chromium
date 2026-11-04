// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App install service factory
// summary: Creates the platform-specific AppInstallService instance, returning the AppInstallServiceAsh implementation for ChromeOS.
// ---

#include "chrome/browser/apps/app_service/app_install/app_install_service.h"

#include <ostream>

#include "chrome/browser/apps/app_service/app_install/app_install_service_ash.h"

namespace apps {

// static
std::unique_ptr<AppInstallService> AppInstallService::Create(Profile& profile) {
  return std::make_unique<AppInstallServiceAsh>(profile);
}

AppInstallService::~AppInstallService() = default;

}  // namespace apps
