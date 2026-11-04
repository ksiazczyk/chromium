// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Zero suggest cache service factory header
// summary: Declares the ZeroSuggestCacheServiceFactory keyed service factory and its GetForProfile accessor for obtaining per-profile zero suggest cache services.
// ---

#ifndef CHROME_BROWSER_AUTOCOMPLETE_ZERO_SUGGEST_CACHE_SERVICE_FACTORY_H_
#define CHROME_BROWSER_AUTOCOMPLETE_ZERO_SUGGEST_CACHE_SERVICE_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"
#include "components/omnibox/browser/zero_suggest_cache_service.h"

class ZeroSuggestCacheServiceFactory : public ProfileKeyedServiceFactory {
 public:
  static ZeroSuggestCacheService* GetForProfile(Profile* profile);

  static ZeroSuggestCacheServiceFactory* GetInstance();

 private:
  friend base::NoDestructor<ZeroSuggestCacheServiceFactory>;

  ZeroSuggestCacheServiceFactory();
  ~ZeroSuggestCacheServiceFactory() override;

  // BrowserContextKeyedServiceFactory:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

#endif  // CHROME_BROWSER_AUTOCOMPLETE_ZERO_SUGGEST_CACHE_SERVICE_FACTORY_H_
