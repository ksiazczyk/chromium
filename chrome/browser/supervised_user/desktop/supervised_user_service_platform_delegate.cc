// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Supervised user service platform delegate implementation
// summary: Implements the desktop SupervisedUserService platform delegate, closing all browsers with the profile's incognito profile when incognito tabs must close.
// ---

#include "chrome/browser/supervised_user/desktop/supervised_user_service_platform_delegate.h"

#include "base/functional/callback_helpers.h"
#include "chrome/browser/lifetime/application_lifetime_desktop.h"
#include "chrome/browser/profiles/profile.h"

SupervisedUserServicePlatformDelegate::SupervisedUserServicePlatformDelegate(
    Profile& profile)
    : ChromeSupervisedUserServicePlatformDelegateBase(profile) {}

void SupervisedUserServicePlatformDelegate::CloseIncognitoTabs() {
  Profile* otr_profile =
      profile_->GetPrimaryOTRProfile(/* create_if_needed =*/false);
  if (otr_profile) {
    chrome::CloseAllBrowsersWithIncognitoProfile(otr_profile);
  }
}
