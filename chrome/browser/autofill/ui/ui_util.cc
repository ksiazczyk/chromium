// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill UI signin utility implementation
// summary: Implements GetPrimaryAccountInfoFromBrowserContext, which retrieves the user's primary account info via the profile's signin identity manager.
// ---

#include "chrome/browser/autofill/ui/ui_util.h"

#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/signin/identity_manager_factory.h"
#include "components/signin/public/identity_manager/account_info.h"
#include "components/signin/public/identity_manager/identity_manager.h"

namespace autofill {

std::optional<AccountInfo> GetPrimaryAccountInfoFromBrowserContext(
    content::BrowserContext* context) {
  Profile* profile = Profile::FromBrowserContext(context);
  signin::IdentityManager* identity_manager =
      IdentityManagerFactory::GetForProfile(profile);
  if (!identity_manager) {
    return std::nullopt;
  }
  CoreAccountInfo core_account =
      identity_manager->GetPrimaryAccountInfo(signin::ConsentLevel::kSignin);
  return identity_manager->FindExtendedAccountInfo(core_account);
}

}  // namespace autofill
