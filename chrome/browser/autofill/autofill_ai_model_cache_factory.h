// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill AI model cache factory header
// summary: Declares AutofillAiModelCacheFactory, the profile-keyed service factory that provides per-profile Autofill AI model cache instances.
// ---

#ifndef CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_MODEL_CACHE_FACTORY_H_
#define CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_MODEL_CACHE_FACTORY_H_

#include "chrome/browser/profiles/profile_keyed_service_factory.h"

namespace base {
template <typename T>
class NoDestructor;
}

class KeyedService;
class Profile;

namespace autofill {

class AutofillAiModelCache;

class AutofillAiModelCacheFactory : public ProfileKeyedServiceFactory {
 public:
  static AutofillAiModelCache* GetForProfile(Profile* profile);
  static AutofillAiModelCacheFactory* GetInstance();

 protected:
  // ProfileKeyedServiceFactory:
  bool ServiceIsCreatedWithBrowserContext() const override;

 private:
  friend base::NoDestructor<AutofillAiModelCacheFactory>;

  AutofillAiModelCacheFactory();
  ~AutofillAiModelCacheFactory() override;

  // BrowserContextKeyedServiceFactory:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* profile) const override;
  bool ServiceIsNULLWhileTesting() const override;
};

}  // namespace autofill

#endif  // CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_MODEL_CACHE_FACTORY_H_
