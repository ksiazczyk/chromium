// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission actions history factory header
// summary: Declares the profile-keyed service factory that provides access to the permission actions history service per profile.
// ---

#ifndef CHROME_BROWSER_PERMISSIONS_PERMISSION_ACTIONS_HISTORY_FACTORY_H_
#define CHROME_BROWSER_PERMISSIONS_PERMISSION_ACTIONS_HISTORY_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

class Profile;

namespace permissions {
class PermissionActionsHistory;
}

class PermissionActionsHistoryFactory : public ProfileKeyedServiceFactory {
 public:
  PermissionActionsHistoryFactory(const PermissionActionsHistoryFactory&) =
      delete;
  PermissionActionsHistoryFactory& operator=(
      const PermissionActionsHistoryFactory&) = delete;
  static permissions::PermissionActionsHistory* GetForProfile(Profile* profile);
  static PermissionActionsHistoryFactory* GetInstance();

 private:
  friend base::NoDestructor<PermissionActionsHistoryFactory>;

  PermissionActionsHistoryFactory();
  ~PermissionActionsHistoryFactory() override;

  // BrowserContextKeyedServiceFactory:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

#endif  // CHROME_BROWSER_PERMISSIONS_PERMISSION_ACTIONS_HISTORY_FACTORY_H_
