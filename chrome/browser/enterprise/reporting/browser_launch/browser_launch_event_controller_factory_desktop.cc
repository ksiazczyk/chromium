// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop browser launch event controller factory implementation
// summary: Creates browser-level and profile-level BrowserLaunchEventController instances wired with the desktop data collector and uploader.
// ---

#include "chrome/browser/enterprise/reporting/browser_launch/browser_launch_event_controller_factory_desktop.h"

#include <memory>
#include <utility>

#include "chrome/browser/browser_process.h"
#include "chrome/browser/enterprise/reporting/browser_launch/browser_launch_data_collector_desktop.h"
#include "chrome/browser/enterprise/reporting/browser_launch/browser_launch_event_uploader_desktop.h"
#include "chrome/browser/profiles/profile.h"
#include "components/enterprise/browser/reporting/browser_launch/browser_launch_event_controller.h"

namespace enterprise_reporting {

// static
std::unique_ptr<BrowserLaunchEventController>
BrowserLaunchEventControllerFactoryDesktop::CreateForBrowser() {
  if (!g_browser_process) {
    return nullptr;
  }
  return std::make_unique<BrowserLaunchEventController>(
      std::make_unique<BrowserLaunchDataCollectorDesktop>(),
      std::make_unique<BrowserLaunchEventUploaderDesktop>());
}

// static
std::unique_ptr<BrowserLaunchEventController>
BrowserLaunchEventControllerFactoryDesktop::CreateForProfile(Profile* profile) {
  if (!profile) {
    return nullptr;
  }
  return std::make_unique<BrowserLaunchEventController>(
      std::make_unique<BrowserLaunchDataCollectorDesktop>(),
      std::make_unique<BrowserLaunchEventUploaderDesktop>(profile));
}

}  // namespace enterprise_reporting
