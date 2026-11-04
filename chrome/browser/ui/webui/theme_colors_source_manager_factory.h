// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Theme colors source manager factory declarations
// summary: Declares the profile-keyed service factory that owns and provides ThemeColorsSourceManager instances.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_THEME_COLORS_SOURCE_MANAGER_FACTORY_H_
#define CHROME_BROWSER_UI_WEBUI_THEME_COLORS_SOURCE_MANAGER_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

class ThemeColorsSourceManager;

// Owns all ThemeColorsSourceManagers and associates them with Profiles.
class ThemeColorsSourceManagerFactory : public ProfileKeyedServiceFactory {
 public:
  // Returns the ThemeColorsSourceManager for `profile`.
  static ThemeColorsSourceManager* GetForProfile(Profile* profile);

  // Returns the singleton instance of the ThemeColorsSourceManagerFactory.
  static ThemeColorsSourceManagerFactory* GetInstance();

 private:
  friend base::NoDestructor<ThemeColorsSourceManagerFactory>;

  ThemeColorsSourceManagerFactory();
  ~ThemeColorsSourceManagerFactory() override;

  // ProfileKeyedServiceFactory overrides:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

#endif  // CHROME_BROWSER_UI_WEBUI_THEME_COLORS_SOURCE_MANAGER_FACTORY_H_
