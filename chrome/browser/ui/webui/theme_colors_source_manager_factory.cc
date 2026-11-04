// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Theme colors source manager factory
// summary: Profile-keyed service factory that creates per-profile theme colors source managers when the in-process resource loading feature is enabled.
// ---

#include "chrome/browser/ui/webui/theme_colors_source_manager_factory.h"

#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/themes/theme_service_factory.h"
#include "chrome/browser/ui/webui/theme_colors_source_manager.h"
#include "content/public/common/content_features.h"

ThemeColorsSourceManager* ThemeColorsSourceManagerFactory::GetForProfile(
    Profile* profile) {
  if (!profile || !GetInstance()) {
    return nullptr;
  }
  return static_cast<ThemeColorsSourceManager*>(
      GetInstance()->GetServiceForBrowserContext(profile, true));
}

ThemeColorsSourceManagerFactory*
ThemeColorsSourceManagerFactory::GetInstance() {
  static base::NoDestructor<ThemeColorsSourceManagerFactory> instance;
  return base::FeatureList::IsEnabled(
             features::kWebUIInProcessResourceLoadingV2)
             ? instance.get()
             : nullptr;
}

ThemeColorsSourceManagerFactory::ThemeColorsSourceManagerFactory()
    : ProfileKeyedServiceFactory(
          "ThemeColorsSourceManager",
          ProfileSelections::Builder()
              // Regular & Incognito profiles.
              .WithRegular(ProfileSelection::kOwnInstance)
              // Guest profiles.
              .WithGuest(ProfileSelection::kOwnInstance)
              .Build()) {
  DependsOn(ThemeServiceFactory::GetInstance());
}

ThemeColorsSourceManagerFactory::~ThemeColorsSourceManagerFactory() = default;

std::unique_ptr<KeyedService>
ThemeColorsSourceManagerFactory::BuildServiceInstanceForBrowserContext(
    content::BrowserContext* context) const {
  return std::make_unique<ThemeColorsSourceManager>(
      Profile::FromBrowserContext(context));
}
