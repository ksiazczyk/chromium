// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Site token provider service factory
// summary: Declares the profile-keyed service factory singleton that creates and owns SiteTokenProviderService instances per profile.
// ---

#ifndef CHROME_BROWSER_SITE_TOKEN_PROVIDER_SITE_TOKEN_PROVIDER_SERVICE_FACTORY_H_
#define CHROME_BROWSER_SITE_TOKEN_PROVIDER_SITE_TOKEN_PROVIDER_SERVICE_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

class Profile;

namespace content {
class BrowserContext;
}

namespace site_token_provider {

class SiteTokenProviderService;

// Singleton that owns all SiteTokenProviderServices and associates them with
// Profiles.
class SiteTokenProviderServiceFactory : public ProfileKeyedServiceFactory {
 public:
  static SiteTokenProviderService* GetForProfile(Profile* profile);
  static SiteTokenProviderServiceFactory* GetInstance();

  SiteTokenProviderServiceFactory(const SiteTokenProviderServiceFactory&) =
      delete;
  SiteTokenProviderServiceFactory& operator=(
      const SiteTokenProviderServiceFactory&) = delete;

 private:
  friend base::NoDestructor<SiteTokenProviderServiceFactory>;

  SiteTokenProviderServiceFactory();
  ~SiteTokenProviderServiceFactory() override;

  // BrowserContextKeyedServiceFactory:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;

  bool ServiceIsCreatedWithBrowserContext() const override;
};

}  // namespace site_token_provider

#endif  // CHROME_BROWSER_SITE_TOKEN_PROVIDER_SITE_TOKEN_PROVIDER_SERVICE_FACTORY_H_
