// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safe Browsing client factory header
// summary: Declares SafeBrowsingClientFactory, a profile-keyed service factory that owns a SafeBrowsingClient instance for each profile.
// ---

#ifndef IOS_CHROME_BROWSER_SAFE_BROWSING_MODEL_SAFE_BROWSING_CLIENT_FACTORY_H_
#define IOS_CHROME_BROWSER_SAFE_BROWSING_MODEL_SAFE_BROWSING_CLIENT_FACTORY_H_

#import <memory>

#import "ios/chrome/browser/shared/model/profile/typed_profile_keyed_service_factory_ios.h"
#import "ios/components/security_interstitials/safe_browsing/safe_browsing_client.h"

// Singleton that owns all SafeBrowsingClients and associates them with
// a profile.
class SafeBrowsingClientFactory
    : public TypedProfileKeyedServiceFactoryIOS<SafeBrowsingClientFactory,
                                                SafeBrowsingClient> {
 public:
  explicit SafeBrowsingClientFactory(PassKey key);

 private:
  // ProfileKeyedServiceFactoryIOS implementation.
  std::unique_ptr<KeyedService> BuildServiceInstanceFor(
      ProfileIOS* profile) const override;
};

#endif  // IOS_CHROME_BROWSER_SAFE_BROWSING_MODEL_SAFE_BROWSING_CLIENT_FACTORY_H_
