// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Paused apps tracking implementation
// summary: Implements tracking of paused apps, letting callers add, remove and query which apps cannot be launched until unpaused.
// ---

#include "chrome/browser/apps/app_service/paused_apps.h"


namespace apps {

PausedApps::PausedApps() = default;

PausedApps::~PausedApps() = default;

AppPtr PausedApps::CreateAppWithPauseStatus(AppType app_type,
                                            const std::string& app_id,
                                            bool paused) {
  auto app = std::make_unique<App>(app_type, app_id);
  app->paused = paused;
  return app;
}

bool PausedApps::MaybeAddApp(const std::string& app_id) {
  auto ret = paused_apps_.insert(app_id);
  return ret.second;
}

bool PausedApps::MaybeRemoveApp(const std::string& app_id) {
  return paused_apps_.erase(app_id) != 0;
}

bool PausedApps::IsPaused(const std::string& app_id) {
  return paused_apps_.contains(app_id);
}

}  // namespace apps
