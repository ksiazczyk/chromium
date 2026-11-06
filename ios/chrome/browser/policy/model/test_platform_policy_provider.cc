// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test platform policy provider implementation
// summary: Returns a singleton mock configuration policy provider that tests install as the platform provider to update the current policy set.
// ---

#import "ios/chrome/browser/policy/model/test_platform_policy_provider.h"

#include "base/no_destructor.h"

policy::MockConfigurationPolicyProvider* GetTestPlatformPolicyProvider() {
  static base::NoDestructor<
      testing::NiceMock<policy::MockConfigurationPolicyProvider>>
      provider;
  provider->SetAutoRefresh();
  provider->SetDefaultReturns(true /* is_initialization_complete_return */,
                              true /* is_first_policy_load_complete_return */);
  return provider.get();
}
