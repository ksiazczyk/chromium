// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Supervised user service platform delegate header
// summary: Header declaring the Android platform delegate for the supervised user service, overriding the incognito tab closing behavior.
// ---

#ifndef CHROME_BROWSER_SUPERVISED_USER_ANDROID_SUPERVISED_USER_SERVICE_PLATFORM_DELEGATE_H_
#define CHROME_BROWSER_SUPERVISED_USER_ANDROID_SUPERVISED_USER_SERVICE_PLATFORM_DELEGATE_H_

#include "chrome/browser/supervised_user/chrome_supervised_user_service_platform_delegate_base.h"

class SupervisedUserServicePlatformDelegate
    : public ChromeSupervisedUserServicePlatformDelegateBase {
 public:
  explicit SupervisedUserServicePlatformDelegate(Profile& profile);

  // SupervisedUserService::PlatformDelegate
  void CloseIncognitoTabs() override;
};

#endif  // CHROME_BROWSER_SUPERVISED_USER_ANDROID_SUPERVISED_USER_SERVICE_PLATFORM_DELEGATE_H_
