// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HID connection tracker profile factory implementation
// summary: Implements the profile-keyed factory that builds HidConnectionTracker instances and depends on the host content settings map.
// ---

#include "chrome/browser/hid/hid_connection_tracker_factory.h"

#include "base/no_destructor.h"
#include "build/build_config.h"
#include "chrome/browser/content_settings/host_content_settings_map_factory.h"
#include "chrome/browser/hid/hid_connection_tracker.h"
#include "chrome/browser/profiles/profile.h"

// static
HidConnectionTrackerFactory* HidConnectionTrackerFactory::GetInstance() {
  static base::NoDestructor<HidConnectionTrackerFactory> factory;
  return factory.get();
}

// static
HidConnectionTracker* HidConnectionTrackerFactory::GetForProfile(
    Profile* profile,
    bool create) {
  return static_cast<HidConnectionTracker*>(
      GetInstance()->GetServiceForBrowserContext(profile, create));
}

HidConnectionTrackerFactory::HidConnectionTrackerFactory()
    : ProfileKeyedServiceFactory(
          "HidConnectionTracker",
          ProfileSelections::Builder()
              .WithRegular(ProfileSelection::kOwnInstance)
              // TODO(crbug.com/40257657): Check if this service is needed in
              // Guest mode.
              .WithGuest(ProfileSelection::kOwnInstance)
              // TODO(crbug.com/41488885): Check if this service is needed for
              // Ash Internals.
              .WithAshInternals(ProfileSelection::kOwnInstance)
              .Build()) {
  DependsOn(HostContentSettingsMapFactory::GetInstance());
}

HidConnectionTrackerFactory::~HidConnectionTrackerFactory() = default;

std::unique_ptr<KeyedService>
HidConnectionTrackerFactory::BuildServiceInstanceForBrowserContext(
    content::BrowserContext* context) const {
  return std::make_unique<HidConnectionTracker>(
      Profile::FromBrowserContext(context));
}
