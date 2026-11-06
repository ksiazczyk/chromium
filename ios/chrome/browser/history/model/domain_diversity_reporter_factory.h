// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DomainDiversityReporterFactory header
// summary: Declares the DomainDiversityReporterFactory keyed service factory that creates domain diversity reporters per profile and registers their preferences.
// ---

#ifndef IOS_CHROME_BROWSER_HISTORY_MODEL_DOMAIN_DIVERSITY_REPORTER_FACTORY_H_
#define IOS_CHROME_BROWSER_HISTORY_MODEL_DOMAIN_DIVERSITY_REPORTER_FACTORY_H_

#include "components/history/metrics/domain_diversity_reporter.h"
#include "ios/chrome/browser/shared/model/profile/typed_profile_keyed_service_factory_ios.h"

namespace user_prefs {
class PrefRegistrySyncable;
}

// Singleton that creates all DomainDiversityReporter instances and associates
// them with BrowserState.
class DomainDiversityReporterFactory
    : public TypedProfileKeyedServiceFactoryIOS<DomainDiversityReporterFactory,
                                                DomainDiversityReporter> {
 public:
  explicit DomainDiversityReporterFactory(PassKey key);

 private:
  // ProfileKeyedServiceFactoryIOS implementation
  void RegisterProfilePrefs(
      user_prefs::PrefRegistrySyncable* registry) override;
  std::unique_ptr<KeyedService> BuildServiceInstanceFor(
      ProfileIOS* profile) const override;
};

#endif  // IOS_CHROME_BROWSER_HISTORY_MODEL_DOMAIN_DIVERSITY_REPORTER_FACTORY_H_
