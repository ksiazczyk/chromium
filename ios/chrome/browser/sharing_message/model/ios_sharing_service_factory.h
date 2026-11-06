// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IOSSharingServiceFactory header
// summary: Declares the IOSSharingServiceFactory singleton that owns SharingService instances and associates them with ProfileIOS via the typed profile-keyed service factory base.
// ---

#ifndef IOS_CHROME_BROWSER_SHARING_MESSAGE_MODEL_IOS_SHARING_SERVICE_FACTORY_H_
#define IOS_CHROME_BROWSER_SHARING_MESSAGE_MODEL_IOS_SHARING_SERVICE_FACTORY_H_

#import "components/sharing_message/sharing_service.h"
#import "ios/chrome/browser/shared/model/profile/typed_profile_keyed_service_factory_ios.h"

// Singleton that owns all SharingService and associates them with
// ProfileIOS.
class IOSSharingServiceFactory
    : public TypedProfileKeyedServiceFactoryIOS<IOSSharingServiceFactory,
                                                SharingService> {
 public:
  explicit IOSSharingServiceFactory(PassKey key);

 private:
  // ProfileKeyedServiceFactoryIOS implementation.
  std::unique_ptr<KeyedService> BuildServiceInstanceFor(
      ProfileIOS* profile) const override;
};

#endif  // IOS_CHROME_BROWSER_SHARING_MESSAGE_MODEL_IOS_SHARING_SERVICE_FACTORY_H_
