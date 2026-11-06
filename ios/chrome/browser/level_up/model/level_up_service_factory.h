// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LevelUpServiceFactory class header
// summary: Declares LevelUpServiceFactory, a profile-keyed singleton that owns LevelUpService instances for iOS Chrome profiles.
// ---

#ifndef IOS_CHROME_BROWSER_LEVEL_UP_MODEL_LEVEL_UP_SERVICE_FACTORY_H_
#define IOS_CHROME_BROWSER_LEVEL_UP_MODEL_LEVEL_UP_SERVICE_FACTORY_H_

#import "ios/chrome/browser/level_up/model/level_up_service.h"
#import "ios/chrome/browser/shared/model/profile/typed_profile_keyed_service_factory_ios.h"

// Singleton that owns all LevelUpServices and associates them with
// profiles.
class LevelUpServiceFactory
    : public TypedProfileKeyedServiceFactoryIOS<LevelUpServiceFactory,
                                                LevelUpService> {
 public:
  explicit LevelUpServiceFactory(PassKey key);

 private:
  // ProfileKeyedServiceFactoryIOS implementation.
  std::unique_ptr<KeyedService> BuildServiceInstanceFor(
      ProfileIOS* profile) const override;
};

#endif  // IOS_CHROME_BROWSER_LEVEL_UP_MODEL_LEVEL_UP_SERVICE_FACTORY_H_
