// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LanguageModelManagerFactory header
// summary: Declares the factory that manages the language model for each profile, with the provided model depending on feature flags.
// ---

#ifndef CHROME_BROWSER_LANGUAGE_LANGUAGE_MODEL_MANAGER_FACTORY_H_
#define CHROME_BROWSER_LANGUAGE_LANGUAGE_MODEL_MANAGER_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

namespace content {
class BrowserContext;
}

namespace language {
class LanguageModelManager;
}

// Manages the language model for each profile. The particular language model
// provided depends on feature flags.
class LanguageModelManagerFactory : public ProfileKeyedServiceFactory {
 public:
  static LanguageModelManagerFactory* GetInstance();
  static language::LanguageModelManager* GetForBrowserContext(
      content::BrowserContext* browser_context);

  LanguageModelManagerFactory(const LanguageModelManagerFactory&) = delete;
  LanguageModelManagerFactory& operator=(const LanguageModelManagerFactory&) =
      delete;

 private:
  friend base::NoDestructor<LanguageModelManagerFactory>;

  LanguageModelManagerFactory();
  ~LanguageModelManagerFactory() override;

  // BrowserContextKeyedServiceFactory overrides.
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

#endif  // CHROME_BROWSER_LANGUAGE_LANGUAGE_MODEL_MANAGER_FACTORY_H_
