// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MultiDeviceSetupServiceFactory header
// summary: Declares the ProfileKeyedServiceFactory that provides MultiDeviceSetupService instances per profile, with a chromeos namespace alias for compatibility.
// ---

#ifndef CHROME_BROWSER_ASH_MULTIDEVICE_SETUP_MULTIDEVICE_SETUP_SERVICE_FACTORY_H_
#define CHROME_BROWSER_ASH_MULTIDEVICE_SETUP_MULTIDEVICE_SETUP_SERVICE_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

class Profile;

namespace ash {
namespace multidevice_setup {

class MultiDeviceSetupService;

class MultiDeviceSetupServiceFactory : public ProfileKeyedServiceFactory {
 public:
  static MultiDeviceSetupService* GetForProfile(Profile* profile);

  static MultiDeviceSetupServiceFactory* GetInstance();

 private:
  friend class base::NoDestructor<MultiDeviceSetupServiceFactory>;

  MultiDeviceSetupServiceFactory();
  MultiDeviceSetupServiceFactory(const MultiDeviceSetupServiceFactory&) =
      delete;
  MultiDeviceSetupServiceFactory& operator=(
      const MultiDeviceSetupServiceFactory&) = delete;
  ~MultiDeviceSetupServiceFactory() override;

  // BrowserContextKeyedServiceFactory implementation:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

}  // namespace multidevice_setup
}  // namespace ash

namespace chromeos {
namespace multidevice_setup {
using ::ash::multidevice_setup::MultiDeviceSetupServiceFactory;
}
}  // namespace chromeos

#endif  // CHROME_BROWSER_ASH_MULTIDEVICE_SETUP_MULTIDEVICE_SETUP_SERVICE_FACTORY_H_
