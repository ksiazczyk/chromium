// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wallet pass access manager factory header
// summary: Declares the WalletPassAccessManagerFactory ProfileKeyedServiceFactory with GetForProfile and GetInstance accessors for obtaining per-profile wallet pass access managers.
// ---

#ifndef CHROME_BROWSER_AUTOFILL_WALLET_PASS_ACCESS_MANAGER_FACTORY_H_
#define CHROME_BROWSER_AUTOFILL_WALLET_PASS_ACCESS_MANAGER_FACTORY_H_

#include "chrome/browser/profiles/profile_keyed_service_factory.h"

namespace base {
template <typename T>
class NoDestructor;
}

class KeyedService;
class Profile;

namespace autofill {

class WalletPassAccessManager;

class WalletPassAccessManagerFactory : public ProfileKeyedServiceFactory {
 public:
  static WalletPassAccessManager* GetForProfile(Profile* profile);
  static WalletPassAccessManagerFactory* GetInstance();

 private:
  friend base::NoDestructor<WalletPassAccessManagerFactory>;

  WalletPassAccessManagerFactory();
  ~WalletPassAccessManagerFactory() override;

  // BrowserContextKeyedServiceFactory:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* profile) const override;
};

}  // namespace autofill

#endif  // CHROME_BROWSER_AUTOFILL_WALLET_PASS_ACCESS_MANAGER_FACTORY_H_
