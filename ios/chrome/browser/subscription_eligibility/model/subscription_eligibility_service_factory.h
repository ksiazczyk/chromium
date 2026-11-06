// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Subscription eligibility service factory header
// summary: Declares a profile-keyed service factory that associates SubscriptionEligibilityService instances with iOS profiles.
// ---

#ifndef IOS_CHROME_BROWSER_SUBSCRIPTION_ELIGIBILITY_MODEL_SUBSCRIPTION_ELIGIBILITY_SERVICE_FACTORY_H_
#define IOS_CHROME_BROWSER_SUBSCRIPTION_ELIGIBILITY_MODEL_SUBSCRIPTION_ELIGIBILITY_SERVICE_FACTORY_H_

#import "components/subscription_eligibility/subscription_eligibility_service.h"
#import "ios/chrome/browser/shared/model/profile/typed_profile_keyed_service_factory_ios.h"

// Singleton that owns all SubscriptionEligibilityServices and associates them
// with ProfileIOS.
class SubscriptionEligibilityServiceFactory
    : public TypedProfileKeyedServiceFactoryIOS<
          SubscriptionEligibilityServiceFactory,
          subscription_eligibility::SubscriptionEligibilityService> {
 public:
  explicit SubscriptionEligibilityServiceFactory(PassKey key);

 private:
  // ProfileKeyedServiceFactoryIOS implementation.
  std::unique_ptr<KeyedService> BuildServiceInstanceFor(
      ProfileIOS* profile) const override;
};

#endif  // IOS_CHROME_BROWSER_SUBSCRIPTION_ELIGIBILITY_MODEL_SUBSCRIPTION_ELIGIBILITY_SERVICE_FACTORY_H_
