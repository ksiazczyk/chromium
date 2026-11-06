// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test platform policy provider declaration
// summary: Declares a function returning a singleton mock platform policy provider for use as the platform provider in tests.
// ---

#ifndef IOS_CHROME_BROWSER_POLICY_MODEL_TEST_PLATFORM_POLICY_PROVIDER_H_
#define IOS_CHROME_BROWSER_POLICY_MODEL_TEST_PLATFORM_POLICY_PROVIDER_H_

#include "components/policy/core/common/mock_configuration_policy_provider.h"

// Returns a singleton mock that can be installed as the platform policy
// provider when testing. Subsequent calls to this method will return the same
// object, which can then be used to update the current set of policies.
policy::MockConfigurationPolicyProvider* GetTestPlatformPolicyProvider();

#endif  // IOS_CHROME_BROWSER_POLICY_MODEL_TEST_PLATFORM_POLICY_PROVIDER_H_
