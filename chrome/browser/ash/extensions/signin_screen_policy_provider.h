// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sign-in screen extension policy provider header
// summary: Declares SigninScreenPolicyProvider, a management policy provider guarding which extensions may load on the sign-in screen.
// ---

#ifndef CHROME_BROWSER_ASH_EXTENSIONS_SIGNIN_SCREEN_POLICY_PROVIDER_H_
#define CHROME_BROWSER_ASH_EXTENSIONS_SIGNIN_SCREEN_POLICY_PROVIDER_H_

#include <string>

#include "base/auto_reset.h"
#include "extensions/browser/management_policy.h"
#include "extensions/common/extension.h"

namespace chromeos {

// A managed policy that guards which extensions can be loaded on
// sign-in screen.
class SigninScreenPolicyProvider
    : public extensions::ManagementPolicy::Provider {
 public:
  SigninScreenPolicyProvider();

  SigninScreenPolicyProvider(const SigninScreenPolicyProvider&) = delete;
  SigninScreenPolicyProvider& operator=(const SigninScreenPolicyProvider&) =
      delete;

  ~SigninScreenPolicyProvider() override;

  // extensions::ManagementPolicy::Provider:
  std::string GetDebugPolicyProviderName() const override;
  bool UserMayLoad(const extensions::Extension* extension,
                   std::u16string* error) const override;
};

std::unique_ptr<base::AutoReset<bool>>
GetScopedSigninScreenPolicyProviderDisablerForTesting();

}  // namespace chromeos

#endif  // CHROME_BROWSER_ASH_EXTENSIONS_SIGNIN_SCREEN_POLICY_PROVIDER_H_
