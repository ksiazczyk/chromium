// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GuestOsSessionTrackerFactory implementation
// summary: Implements the profile-keyed factory that creates a GuestOsSessionTracker per profile using the profile's user ID hash.
// ---

#include "chrome/browser/ash/guest_os/guest_os_session_tracker_factory.h"

#include "base/no_destructor.h"
#include "chrome/browser/ash/guest_os/guest_os_session_tracker.h"
#include "chrome/browser/ash/profiles/profile_helper.h"
#include "chrome/browser/profiles/profile.h"

namespace guest_os {

// static
GuestOsSessionTracker* GuestOsSessionTrackerFactory::GetForProfile(
    Profile* profile) {
  return static_cast<GuestOsSessionTracker*>(
      GetInstance()->GetServiceForBrowserContext(profile, true));
}

// static
GuestOsSessionTrackerFactory* GuestOsSessionTrackerFactory::GetInstance() {
  static base::NoDestructor<GuestOsSessionTrackerFactory> factory;
  return factory.get();
}

GuestOsSessionTrackerFactory::GuestOsSessionTrackerFactory()
    : ProfileKeyedServiceFactory(
          "GuestOsSessionTracker",
          ProfileSelections::Builder()
              .WithRegular(ProfileSelection::kRedirectedToOriginal)
              .WithGuest(ProfileSelection::kNone)
              .WithAshInternals(ProfileSelection::kNone)
              .WithSystem(ProfileSelection::kNone)
              .Build()) {}

GuestOsSessionTrackerFactory::~GuestOsSessionTrackerFactory() = default;

std::unique_ptr<KeyedService>
GuestOsSessionTrackerFactory::BuildServiceInstanceForBrowserContext(
    content::BrowserContext* context) const {
  Profile* profile = Profile::FromBrowserContext(context);
  return std::make_unique<GuestOsSessionTracker>(
      ash::ProfileHelper::GetUserIdHashFromProfile(profile));
}

}  // namespace guest_os
