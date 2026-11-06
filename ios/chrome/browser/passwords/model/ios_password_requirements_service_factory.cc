// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IOSPasswordRequirementsServiceFactory implementation
// summary: Builds a PasswordRequirementsService for each profile using the profile's shared URL loader factory.
// ---

#include "ios/chrome/browser/passwords/model/ios_password_requirements_service_factory.h"

#include "components/password_manager/core/browser/password_requirements_service.h"
#include "ios/chrome/browser/shared/model/profile/profile_ios.h"
#include "services/network/public/cpp/shared_url_loader_factory.h"

IOSPasswordRequirementsServiceFactory::IOSPasswordRequirementsServiceFactory(
    PassKey key)
    : TypedProfileKeyedServiceFactoryIOS(std::move(key),
                                         "PasswordRequirementsServiceFactory",
                                         TestingCreation::kNoServiceForTests) {}

std::unique_ptr<KeyedService>
IOSPasswordRequirementsServiceFactory::BuildServiceInstanceFor(
    ProfileIOS* profile) const {
  return password_manager::CreatePasswordRequirementsService(
      profile->GetSharedURLLoaderFactory());
}
